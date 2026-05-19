#include <iostream>
using namespace std;

int main() {
    int A[20];
    cout << "Enter 20 integers: " << endl;
    for (int i = 0; i < 20; i++) {
        cin >> A[i];
    }
    cout << "The array elements are: " << endl;
    for (int i = 0; i < 20; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
