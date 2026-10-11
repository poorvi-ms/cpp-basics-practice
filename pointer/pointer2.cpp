
#include <iostream>
using namespace std;

//Swap two numbers using pointers

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
