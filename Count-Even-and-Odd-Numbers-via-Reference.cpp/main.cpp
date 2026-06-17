#include <iostream>
using namespace std;
void countEvenOdd(int a, int b, int c, int &evenCount, int &oddCount) {
    evenCount = oddCount = 0;

    if (a % 2 == 0) evenCount++; else oddCount++;
    if (b % 2 == 0) evenCount++; else oddCount++;
    if (c % 2 == 0) evenCount++; else oddCount++;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    int evenCount, oddCount;

    countEvenOdd(x, y, z, evenCount, oddCount);

    cout << "Even numbers count = " << evenCount << endl;
    cout << "Odd numbers count = " << oddCount << endl;

    return 0;
}
