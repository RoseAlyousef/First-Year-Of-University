#include <iostream>
using namespace std;

void printFibonacci10() {
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 3; i <= 10; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}
int main() {
    printFibonacci10();

    return 0;
}
