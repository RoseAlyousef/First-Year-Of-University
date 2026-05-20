#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;
    int *ptr1, *ptr2;
    a = 30;
    b = 6;
    ptr1 = &a;
    ptr2 = &b;
    // حساب العمليات الحسابية عن طريق جلب القيم بالمؤشرات
    x = *ptr1 + *ptr2 - 6;
    y = 6 - *ptr1 / *ptr2 + 30;
    cout << "Address of a = " << ptr1 << endl;
    cout << "Address of b = " << ptr2 << endl;
    cout << "a = " << a << " " << "b = " << b << endl;
    cout << "x = " << x << " " << "y = " << y << endl;
    // تعديل قيم المتغيرات الأصلية عبر المؤشرات
    *ptr1 = *ptr1 + 70;
    *ptr2 = *ptr2 * 2;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
