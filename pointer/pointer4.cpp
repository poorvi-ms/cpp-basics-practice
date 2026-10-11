
#include <iostream>
using namespace std;

//Write a program to find the square of a number using pointer

void square(int *p) {
    cout << "Square = " << (*p) * (*p);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    square(&n);

    return 0;
}
