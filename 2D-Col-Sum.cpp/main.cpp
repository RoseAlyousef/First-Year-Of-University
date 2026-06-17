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
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += a[i][j];
        }
        cout << "Sum of column " << j << " = " << colSum << endl;
    }

    return 0;
}
