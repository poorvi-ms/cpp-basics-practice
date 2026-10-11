
#include <iostream>
using namespace std;

//Store details of multiple students

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter roll, name and marks: ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
    }

    cout << "\nStudent Details\n";

    for (int i = 0; i < 3; i++) {
        cout << s[i].roll << " "
             << s[i].name << " "
             << s[i].marks << endl;
    }

    return 0;
}
