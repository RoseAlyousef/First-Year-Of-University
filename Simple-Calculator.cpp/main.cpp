#include <iostream>
#include <iomanip> // For controlling decimal output

using namespace std;

int main() {
    double num1, num2;

    // Introduction message
    cout << "========================================" << endl;
    cout << "   Welcome to Simple Calculator Pro" << endl;
    cout << "========================================" << endl;

    // Input prompts
    cout << "\nPlease enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "\n--- Calculation Results ---" << endl;

    // Addition
    cout << "Addition:       " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

    // Subtraction
    cout << "Subtraction:    " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;

    // Multiplication
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    // Division with error handling
    cout << "Division:       ";
    if (num2 != 0) {
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    } else {
        cout << "Error! Division by zero is mathematically undefined." << endl;
    }

    cout << "---------------------------" << endl;
    cout << "Thank you for using our service!" << endl;

    return 0;
}
