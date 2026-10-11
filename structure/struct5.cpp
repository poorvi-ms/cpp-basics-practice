
#include <iostream>
using namespace std;

//Pass a structure variable to a function and display its details.

struct Student {
    int roll;
    char name[30];
    float marks;
};

void display(Student s) {
    cout << "\nStudent Details\n";
    cout << "Roll: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s;

    cout << "Enter roll, name and marks: ";
    cin >> s.roll >> s.name >> s.marks;

    display(s);

    return 0;
}
