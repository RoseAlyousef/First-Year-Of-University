#include <iostream>
using namespace std;

int main() {
    int A[10];
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    float sum = 0;
    for (int i = 0; i < 10; i++) {
        sum = sum + A[i];
    }
    float avg = sum / 10;
    cout << "avg = " << avg << endl;

    return 0;
}
