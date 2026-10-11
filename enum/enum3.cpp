
#include <iostream>
using namespace std;

//Display traffic light signals

enum Signal {RED = 1, YELLOW, GREEN};

int main() {
    int n;

    cout << "Enter signal (1-Red, 2-Yellow, 3-Green): ";
    cin >> n;

    Signal s = static_cast<Signal>(n);

    switch (s) {
        case RED:
            cout << "STOP";
            break;
        case YELLOW:
            cout << "GET READY";
            break;
        case GREEN:
            cout << "GO";
            break;
        default:
            cout << "Invalid signal";
    }

    return 0;
}
