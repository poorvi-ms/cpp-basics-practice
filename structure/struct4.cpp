
#include <iostream>
using namespace std;

//Declare a structure for employee details and display them.

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    Employee e;

    cout << "Enter employee ID: ";
    cin >> e.id;

    cout << "Enter employee name: ";
    cin >> e.name;

    cout << "Enter salary: ";
    cin >> e.salary;

    cout << "\nEmployee Details\n";
    cout << "ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;

    return 0;
}
