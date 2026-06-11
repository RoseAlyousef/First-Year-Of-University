#include <iostream>
using namespace std;

int main() {
    int arr[5][3];
    int sum = 0;

    cout << "Enter elements for a 5x3 array:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << "\nThe array is:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nSum of all elements = " << sum << endl;
    cout << "\nOutput based on condition (row > column):\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j) {
                cout << arr[i][j] << "\t";
            } else {
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
