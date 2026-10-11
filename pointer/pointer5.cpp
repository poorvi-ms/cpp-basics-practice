
#include <iostream>
using namespace std;

//Write a program to modify the value of a variable using pointer

int main() {
    int a = 10;
    int *p = &a;

    cout << "Before modification: " << a << endl;

    *p = 50;

    cout << "After modification: " << a << endl;

    return 0;
}
