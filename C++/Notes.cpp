
#include <iostream>
#include <fstream>

using namespace std;


int main () {
    string name;
    cout << "Do you want to open a note, or create a note? (o/c): " << endl;
    char choice;
    cin >> choice;
    cout << " " << endl;

    if (choice == 'c') {
        cout << "What is the name of your note? " << endl;
        cin >> name;
        cout << " " << endl;
        
        cout << "Write the contents of your note and type 'FinishedTyping' when you are done: " << endl;
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

        cout << "Your note" << name << " has been created " << endl;
        cout << " " << endl;
    }

    if (choice == 'o') {
        cout << "What is the name of your note? " << endl;
        cin >> name;
        cout << " " << endl;

        ifstream file;
        file.open(name);
        string text;
        string line;
        while (getline(file, line)) {
            text += line;
            text += "\n";
        }
        cout << text << endl;
        file.close();
    }

    return 0;
}