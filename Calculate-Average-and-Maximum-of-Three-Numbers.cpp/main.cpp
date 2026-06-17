#include <iostream>
using namespace std;
void changeByValue(int x) {
    x = 100;
}
void changeByReference(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    changeByValue(a);
    cout << "Value after changeByValue: " << a << " (Stays 10)" << endl; // تبقى القيمة 10
    changeByReference(a);
    cout << "Value after changeByReference: " << a << " (Becomes 100)" << endl; // تصبح القيمة 100

    return 0;
}
