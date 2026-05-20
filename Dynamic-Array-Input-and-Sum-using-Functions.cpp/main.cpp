#include <iostream>
using namespace std;
// دالة حساب المجموع عبر المؤشر
int sum(int *x, int sz) {
    int s = 0;
    for (int k = 0; k < sz; k++) {
        s = s + x[k];
    }
    return s;
}
int main() {
    int size;
    cout << "enter size: ";
    cin >> size;
    // حجز مصفوفة ديناميكية وتعبئتها بواسطة المؤشرات
    int *cool = new int[size];
    cout << "enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> *(cool + i);
    }
    cout << "sum=" << sum(cool, size) << endl;

    delete[] cool; // تحرير الذاكرة
    return 0;
}
