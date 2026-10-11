
#include <iostream>
using namespace std;

//Declare a union for different data types and display the character value.

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    Data d;

    d.ch = 'A';

    cout << "Character = " << d.ch;

    return 0;
}
