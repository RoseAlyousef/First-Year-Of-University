#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    int result = findMax(n1, n2);
    cout << "The larger number is: " << result << endl;

    return 0;
}
