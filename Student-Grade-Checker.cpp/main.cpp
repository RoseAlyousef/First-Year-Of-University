#include <iostream>
using namespace std;

int main() {
    int grade;

    // Ask for grade
    cout << "Enter student grade: ";
    cin >> grade;

    // Check if passed or failed
    if (grade >= 50) {
        cout << "Result: Success" << endl;
        cout << "Congratulations!" << endl;
    }
    else {
        cout << "Result: Fail" << endl;
        cout << "Try again next time." << endl;
    }

    return 0;
}
