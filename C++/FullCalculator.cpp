
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, answer;
    char op;
    bool run = true;
    
    while (run) {
        
        cout << "Type 1 to calculate the root of a number. " << endl;
        cout << "Type 2 to calculate other operations. " << endl;
        cout << " " << endl;

        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << " " << endl;
            cout << "Enter a number: " << endl;
            cin >> num1;
            answer = sqrt(num1);
            cout << " " << endl;
            cout << "---Answer---" << endl;
            cout << "The square root of " << num1 << " is " << answer << endl;
            cout << "---Answer---" << endl;
            cout << " " << endl;

            cout << "Do you want to continue? (y/n): " << endl;
            char cont;
            cin >> cont; 
            cout << " " << endl;
            if (cont == 'n') {
                run = false;
            }
            continue;
        }

        if (choice == 2) {
            cout << "Enter a number, an operator, and another number: " << endl;
            cout << "List of accepted operators: +, -, *, /, ^, %" << endl;
            cin >> num1 >> op >> num2;
            switch (op) {
                case '+':
                    answer = num1 + num2;
                    break;
                case '-':
                    answer = num1 - num2;
                    break;
                case '*':
                    answer = num1 * num2;
                    break;
                
                case '/':
                    answer = num1 / num2;
                    break;
                case '^':
                    answer = pow(num1, num2);
                    break;
                case '%':
                    answer = fmod(num1, num2);
                    break;
                default:
                    cout << "Invalid operator" << endl;
                    break;
            }
            cout << num1 << " " << op << " " << num2 << " = " << answer << endl;
            cout << "Do you want to continue? (y/n): ";
            char cont;
            cin >> cont;
            if (cont == 'n') {
                run = false;
            }
            continue;
        }
    }
    return 0;
}