#include <iostream>
using namespace std;

int main() { // تعريف مؤشر فارغ لا يشير لأي عنوان في الذاكرة
    int *ptr = NULL;
    cout << "The value of ptr is " << ptr << endl; // سيطبع 0
    return 0;
}
