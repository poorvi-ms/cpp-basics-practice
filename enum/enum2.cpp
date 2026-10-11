
#include <iostream>
using namespace std;

//Assign custom values to enum constants

enum Level {LOW = 1, MEDIUM = 5, HIGH = 10};

int main() {
    cout << "Low = " << LOW << endl;
    cout << "Medium = " << MEDIUM << endl;
    cout << "High = " << HIGH << endl;

    return 0;
}
