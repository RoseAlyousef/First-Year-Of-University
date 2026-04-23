#include <iostream>
using namespace std;

void avg(float x, float y, float z)
{
    float d = (x + y + z) / 3;
    cout << "The average is: " << d << endl;
}

int main()
{
    float a, b, c;

    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    avg(a, b, c);

    return 0;
}
