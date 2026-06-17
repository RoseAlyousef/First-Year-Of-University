#include <iostream>
using namespace std;

int main() {
    int a[3][3];

    cout << "Enter elements for 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += a[i][j];
        }
        cout << "Sum of row " << i << " = " << rowSum << endl;
    }

    return 0;
}
