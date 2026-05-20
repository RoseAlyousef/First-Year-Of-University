#include <iostream>
using namespace std;
// دالة تستقبل مصفوفة كمؤشر وتحسب مجموع عناصرها
int sum(int *x, int z) {
    int s = 0;
    for (int i = 0; i < z; i++) {
        s = s + x[i];
    }
    return s;
}
int main() {
    int cool[6] = {1, 2, 3, 4, 5, 6};
    cout << "Sum = " << sum(cool, 6) << endl; // سيطبع 21
    return 0;
}
