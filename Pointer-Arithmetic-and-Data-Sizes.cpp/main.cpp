#include <iostream>
using namespace std;
int main() {
    int a = 10;
    double b = 15.5;
    int *ptr1 = &a;
    double *ptr2 = &b;
    cout << "Original addresses:" << endl;
    cout << "int_ptr: " << ptr1 << endl;
    cout << "float_ptr: " << ptr2 << endl;
    ptr1++; // يزداد بمقدار 4 بايت لأن نوعه int
    ptr2--; // ينقص بمقدار 8 بايت لأن نوعه double
    cout << "\n After incrementing :\n" << endl;
    cout << "int ptr1 + 1: " << ptr1 << endl;
    cout << "double ptr2 - 1: " << ptr2 << endl;
    return 0;
}
