#include <iostream>
using namespace std;

int main() {
    int a[4] = {3, 5, 7, 9};
    int *p;
    p = a;
    p = &a[0];
    cout << *p << endl;
    for (int i = 0; i < 4; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
