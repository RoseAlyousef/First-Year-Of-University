#include <iostream>
using namespace std;

int main() {
    int A[3];
    cout << "Enter 3 integers: " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    cout << "The array elements are: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
