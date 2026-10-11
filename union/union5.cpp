
#include <iostream>
using namespace std;

//Store and display student details using a union

union Student {
    int roll;
    float marks;
};

int main() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Roll number = " << s.roll;

    return 0;
}
