
#include <iostream>
using namespace std;

//Declare a union for different data types and display the integer value.

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    Data d;

    d.i = 10;

    cout << "Integer value = " << d.i;

    return 0;
}
