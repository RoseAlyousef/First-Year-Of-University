#include <iostream>
using namespace std;

long long getFactorial(int targetNumber) {
    long long accumulator = 1;

    for (int step = 1; step <= targetNumber; step++) {
        accumulator *= step;
    }

    return accumulator;
}

int main() {
    int input;
    cout << "Enter a number to find its factorial: ";
    cin >> input;

    if (input < 0) {
        cout << "Negative numbers are not allowed." << endl;
    } else {
        cout << "Result: " << getFactorial(input) << endl;
    }

    return 0;
}
