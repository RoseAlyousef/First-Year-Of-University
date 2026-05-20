#include <iostream>
using namespace std;
int main() {
    int var[3] = {10, 100, 200};
    int *ptr = var; // المؤشر يأخذ عنوان أول عنصر تلقائياً
        for (int i = 0; i < 3; i++) {
        cout << "Address of var [" << i << "] = " << ptr << endl;
        cout << "Value of var [" << i << "] = " << *ptr << endl;
        ptr++; // الانتقال للعنصر التالي في الذاكرة
    }

    return 0;
}
