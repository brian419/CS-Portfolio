
#include <iostream>
#include <fstream>

using namespace std;


int main () {
    string name;
    cout << "Do you want to open a file, or create a file? (o/c): " << endl;
    char choice;
    cin >> choice;
    cout << " " << endl;

    if (choice == 'c') {
        cout << "What is the name of your file? " << endl;
        cin >> name;
        cout << " " << endl;
        


        cout << "Write the contents of your file and type 'FinishedTyping' when you are done: " << endl;
        string text;
        string currentWord;
        
        while (currentWord != "FinishedTyping") {
            cin >> currentWord;
            if (currentWord == "FinishedTyping") {
                break;
            }
            text += currentWord;
            text += " ";
        }
        

        
        cout << " " << endl;

        ofstream file;
        file.open(name);
        file << text;
        file.close();

        cout << "Your file" << name << " has been created " << endl;
        cout << " " << endl;
    }




    
    return 0;
}