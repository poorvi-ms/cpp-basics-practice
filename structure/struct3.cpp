
#include <iostream>
using namespace std;

//Calculate total and average marks of a student using structure

struct Student {
    char name[30];
    int m1, m2, m3;
};

int main() {
    Student s;
    int total;
    float avg;

    cout << "Enter student name: ";
    cin >> s.name;

    cout << "Enter 3 subject marks: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    total = s.m1 + s.m2 + s.m3;
    avg = total / 3.0;

    cout << "Name: " << s.name << endl;
    cout << "Total = " << total << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
