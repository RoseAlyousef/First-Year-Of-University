#include <iostream>
using namespace std;


void greet() {
    cout << "Hello Students!" << endl;
}


void printSum(int a, int b) {
    cout << "Sum = " << a + b << endl;
}

int main() {

    greet();
    printSum(5, 7);

    return 0;
}
