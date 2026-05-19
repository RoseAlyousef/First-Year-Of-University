#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int *ptr;
    ptr = &a;
    // توضيح العلاقة العكسية بين المعامل * والمعامل &
    cout << "The address of a is " << &a << " and The value of ptr is " << ptr << endl;
    cout << "The value of a is " << a << " The value of *ptr is " << *ptr << endl;
    cout << "Showing that * and & are inverses of " << "\n&*ptr = " << &*ptr << "\n*&ptr = " << *&ptr << endl;
    return 0;
}
