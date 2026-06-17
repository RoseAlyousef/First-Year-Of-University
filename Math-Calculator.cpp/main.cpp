#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double degrees;
    cout << "Enter an angle in degrees: ";
    cin >> degrees;

    double radians = degrees * M_PI / 180.0;

    double sine = sin(radians);
    double cosine = cos(radians);
    double tangent = tan(radians);
    double squareRoot = sqrt(degrees);
    double power = pow(degrees, 2);

    cout << "\n--- Results ---" << endl;
    cout << "sin(" << degrees << ") = " << sine << endl;
    cout << "cos(" << degrees << ") = " << cosine << endl;
    cout << "tan(" << degrees << ") = " << tangent << endl;
    cout << "Square root = " << squareRoot << endl;
    cout << "Power 2 = " << power << endl;

    return 0;
}
