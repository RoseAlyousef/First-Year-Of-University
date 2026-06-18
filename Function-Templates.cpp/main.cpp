#include <iostream>
using namespace std;

// بناء قالب تابع مرن يقبل أي نوع بيانات T
template <class T>
T maximum(T value1, T value2, T value3) {
    T maxVal = value1;

    if (value2 > maxVal) maxVal = value2;
    if (value3 > maxVal) maxVal = value3;

    return maxVal;
}

int main() {
    // 1. تجربة القالب مع أعداد صحيحة
    cout << "Max Int: " << maximum(1, 2, 3) << endl;

    // 2. تجربة القالب مع أعداد عشرية
    cout << "Max Double: " << maximum(3.3, 2.2, 1.1) << endl;

    // 3. تجربة القالب مع المحارف (Characters)
    cout << "Max Char: " << maximum('A', 'C', 'B') << endl;

    return 0;
}
