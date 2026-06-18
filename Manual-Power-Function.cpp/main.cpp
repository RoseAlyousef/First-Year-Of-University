#include <iostream>
using namespace std;ً
void calculatePower(int x, int y) {
    int result = 1;
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    cout << x << "^" << y << " = " << result << endl;
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    calculatePower(base, exponent);

    return 0;
}
