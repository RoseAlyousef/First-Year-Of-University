#include <iostream>
using namespace std;

int main() {
    int n = 23;
    int *p = &n;
    cout << "&n=" << &n << " and p=" << p << endl;
    ++p; // إزاحة المؤشر بمقدار 4 بايت
    cout << "after p++ : p=" << p << endl;
    p += 2; // إزاحة بمقدار عنصرين (8 بايت)
    cout << "after p+=2: p=" << p << endl;
    p--; // إنقاص بمقدار عنصر (4 بايت)
    cout << "after p-- : p=" << p << endl;
    int *p1 = &n;
    cout << "p1=" << p1 << endl;
    cout << "p-p1=" << p - p1 << endl; // يطبع الفرق كعدد عناصر (1)
    cout << "*p1=" << *p1 << endl;
    return 0;
}
