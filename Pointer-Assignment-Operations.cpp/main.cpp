#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 15;
    int *p1, *p2;
    p1 = &x;     // p1 يشير إلى x
    p2 = &y;     // p2 يشير إلى y
    *p1 = 10;    // تعديل قيمة x لتصبح 10
    *p2 = *p1;   // تعديل قيمة y لتصبح مساوية لقيمة x (أي 10)
    p1 = p2;     // جعل p1 يشير إلى نفس مكان p2 (وهو y)
    *p1 = 20;    // تعديل القيمة التي يشير إليها p1 لتصبح 20 (تعديل y)
    cout << "first value is " << x << '\n';   // ستطبع 10
    cout << "second value is " << y << '\n';  // ستطبع 20
    return 0;
}
