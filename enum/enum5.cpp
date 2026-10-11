
#include <iostream>
using namespace std;

//Declare an enum for numbers and display their values.

enum Number {ONE = 1, TWO, THREE, FOUR, FIVE};

int main() {
    for (int i = ONE; i <= FIVE; i++) {
        cout << i << " ";
    }

    return 0;
}
