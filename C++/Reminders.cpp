
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cout << "Welcome to the reminders program!" << endl;
    cout << " " << endl;

    cout << "Type 1 to create a reminder. " << endl;
    cout << "Type 2 to view your reminders. " << endl;
    cout << " " << endl;

    int choice;
    cin >> choice;
    cout << " " << endl;

    

    if (choice == 1) {
        cout << "What is the name of your reminder? " << endl;
        string name;
        cin >> name;
        cout << " " << endl;

        cout << "What is the date of your reminder? (mm/dd/yyyy) " << endl;
        string date;
        cin >> date;
        cout << " " << endl;

        
        cout << "Write the contents of your reminder and type 'FinishedTyping' when you are done: " << endl;
        string text;
        string currentWord;

        text += "Title: ";
        text += name;
        text += "\n";
        text += "Date: ";
        text += date;
        text += "\n";
        text += "\n";

        while (currentWord != "FinishedTyping") {
            cin >> currentWord;
            if (currentWord == "FinishedTyping") {
                break;
            }
            text += currentWord;
            text += " ";
        }

        ofstream file;
        file.open(name);
        file << text;
        file.close();

        cout << "Your reminder " << name << " has been created " << endl;
        cout << " " << endl;
        


    }
    if (choice == 2) {

        cout << "What is the name of your reminder? " << endl;
        string name;
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

        cout << " The file " << name << " has been opened. " << endl;

    }

}