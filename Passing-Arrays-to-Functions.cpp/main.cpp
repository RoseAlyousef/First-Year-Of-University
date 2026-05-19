#include <iostream>
using namespace std;
void doubleArray(int arr[], int size);
void doubleElement(int x);

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for (int i = 0; i < 5; i++) cout << numbers[i] << " ";
    cout << endl;
    doubleArray(numbers, 5);
    cout << "Array after doubling: ";
    for (int i = 0; i < 5; i++) cout << numbers[i] << " ";
    cout << endl;
    cout << "\nOriginal value of numbers[2]: " << numbers[2] << endl;
    doubleElement(numbers[2]);
    cout << "Value of numbers[2] after function: " << numbers[2] << endl;

    return 0;
}
void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}
void doubleElement(int x) {
    x *= 2;
    cout << "Value inside function: " << x << endl;
}
