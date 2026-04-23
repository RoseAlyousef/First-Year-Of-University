#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    float x, y;

    cout << "Enter x: ";
    cin >> x;

    y = ((pow(x, 5) * log(x)) / (exp(3) - 3)) + fabs(x - sqrt(x));

    cout << "y= " << y << endl;

    return 0;
}
