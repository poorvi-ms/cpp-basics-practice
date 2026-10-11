
#include <iostream>
using namespace std;

//Access array elements using a pointer

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    cout << "Array elements are:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }

    return 0;
}
