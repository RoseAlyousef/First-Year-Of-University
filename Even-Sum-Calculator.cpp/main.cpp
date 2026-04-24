#include <iostream>
using namespace std;

int sumEven(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of even numbers = " << sumEven(n) << endl;

    return 0;
}
