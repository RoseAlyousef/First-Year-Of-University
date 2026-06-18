#include <iostream>
using namespace std;

// تابع عودي لحساب المجموع من 1 إلى n
int sumRecursive(int n) {
    if (n <= 1) {
        return 1; // شرط الإيقاف
    } else {
        return n + sumRecursive(n - 1); // الخطوة العودية
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum from 1 to " << num << " is: " << sumRecursive(num) << endl;
    return 0;
}

