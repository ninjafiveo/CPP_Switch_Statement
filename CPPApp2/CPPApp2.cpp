// CPPApp2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <cstring>
//#include <string>

using namespace std;

int main()
{
    cout << "Welcome to Ninja Class\n";
    char grade;
    cout << "What is your grade? ";
    cin >> grade;
    //cout << "You entered: " << grade << "\n\n";
    grade = tolower(grade);
    //cout << "You entered: " << grade << "\n\n";

    switch(grade){
        //case 'a' || 'b' || 'c' || 'd' :
        case 'a':
        case 'b':
        case 'c':
        case 'd':
            cout << "You passed with a grade of: " << grade << "\n\n";
            switch (grade) {
                //case 'a' || 'b' || 'c' || 'd' :
            case 'a':
                cout << "Excellent job.\n";
                break;
            case 'b':
                cout << "Good job.\n";
                break;
            case 'c':
                cout << "Meh, it's average.\n";
                break;
            case 'd':
                cout << "Well, it's not an 'F', do better.\n";
                break;
            default:
                cout << "I did not catch that. " << grade << "\n\n";
            }
            break;
        case 'f':
            cout << "You must love this class so much you want to pay to take it twice.\n";
            break;
        default:
            cout << "I did not catch that. " << grade << "\n\n";
    }
}
