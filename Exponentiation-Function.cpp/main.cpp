#include <iostream>
using namespace std;

void power(int x, int y)
{
    int s = 1;
    for (int i = 1; i <= y; i++)
    {
        s = s * x;
    }
    cout << x << "^" << y << " = " << s << endl;
}

int main ()
{
    int a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    power(a, b);

    return 0;
}
