#include <iostream>
using namespace std;


float calculateSpeed(float d, float t) {
    return d / t;
}

int main() {
    float d, t;

    cout << "Enter distance: ";
    cin >> d;
    cout << "Enter time: ";
    cin >> t;

    if (t != 0) {
        cout << "Speed = " << calculateSpeed(d, t) << endl;
    } else {5
        cout << "Time cannot be zero!" << endl;
    }

    return 0;
}
