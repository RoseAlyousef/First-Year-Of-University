#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Please enter 5 integers:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter number (" << i << "): ";
        cin >> number;

        if (number % 2 == 0) {
            cout << "==> " << number << " is an EVEN number." << endl;
        }
    }

    cout << "Done filtering." << endl;
    return 0;
}
