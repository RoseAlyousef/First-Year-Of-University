#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the input for array size: ";
    cin >> n;
    // إنشاء مصفوفة ديناميكية بناءً على الحجم المعطى لتجنب أخطاء حجز الذاكرة الثابتة
    int *a = new int[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }

    cout << "The given array elements and addresses are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Value: " << *(a + i) << " | Address: " << (a + i) << endl;
    }



    delete[] a; // تحرير الذاكرة المحجوزة
    return 0;
}
