
#include <iostream>
using namespace std;

//Demonstrate shared memory in a union

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    Data d;

    cout << "Size of union = " << sizeof(d) << endl;

    d.i = 65;
    cout << "Integer value = " << d.i << endl;

    d.ch = 'A';
    cout << "Character value = " << d.ch << endl;

    return 0;
}
