#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[4] = {10, 20, 30, 40};

    while (n > 0) {
        cout << "Array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        n--;
    }
    cout << "Array is now empty." << endl;
    return 0;
}
