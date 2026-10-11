
#include <iostream>
using namespace std;

//Write a program to Use a union to store different data types

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    Data d;
    int choice;

    cout << "1. Integer\n";
    cout << "2. Float\n";
    cout << "3. Character\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter integer: ";
            cin >> d.i;
            cout << "Integer = " << d.i;
            break;

        case 2:
            cout << "Enter float: ";
            cin >> d.f;
            cout << "Float = " << d.f;
            break;

        case 3:
            cout << "Enter character: ";
            cin >> d.ch;
            cout << "Character = " << d.ch;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
