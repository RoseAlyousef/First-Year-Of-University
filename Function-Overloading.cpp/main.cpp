#include <iostream>
using namespace std;

// تابع لحساب مربع الأعداد الصحيحة
int square(int x) {
    cout << "Called square with int argument: " << x << endl;
    return x * x;
}

// تابع لحساب مربع الأعداد العشارية
double square(double y) {
    cout << "Called square with double argument: " << y << endl;
    return y * y;
}

int main() {
    int intResult = square(7);       // يستدعي نسخة الـ int تلقائياً
    double doubleResult = square(7.5); // يستدعي نسخة الـ double تلقائياً

    cout << "\nSquare of 7 = " << intResult << endl;
    cout << "Square of 7.5 = " << doubleResult << endl;

    return 0;
}
