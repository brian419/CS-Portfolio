
#include <iostream>

using namespace std;


int main()
{
    int firstNum, secondNum;
    char op;

    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> secondNum;


    int newNum = 0;

    if (op == '+')
    {
        newNum = firstNum + secondNum;
    }
    else if (op == '-')
    {
        newNum = firstNum - secondNum;
    }
    else if (op == '*' || op == 'x' || op == 'X')
    {
        newNum = firstNum * secondNum;
    }
    else if (op == '/')
    {
        newNum = firstNum / secondNum;
    }
    else
    {
        cout << "Invalid operator!";
    }

    cout << newNum;

    return 0;
}

