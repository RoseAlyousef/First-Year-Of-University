#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int a[size] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int hold;
    for (int pass = 0; pass < size - 1; pass++) {
        for (int j = 0; j < size - 1; j++) {
            if (a[j] > a[j + 1]) {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

