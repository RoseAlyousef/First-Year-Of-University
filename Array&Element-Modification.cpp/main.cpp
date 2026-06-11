#include <iostream>
using namespace std;

void doubleArray(int arr[], int size) {
   for (int i = 0; i < size; i++) {
       arr[i] = arr[i] * 2;
   }
}

void doubleElement(int x) {
   x = x * 2;
   cout << "Value inside doubleElement after modification: " << x << endl;
}

int main() {
   int numbers[5] = {1, 2, 3, 4, 5};

   cout << "Original array: ";
   for (int i = 0; i < 5; i++) {
       cout << numbers[i] << " ";
   }
   cout << endl;

   doubleArray(numbers, 5);

   cout << "Array after doubleArray: ";
   for (int i = 0; i < 5; i++) {
       cout << numbers[i] << " ";
   }
   cout << endl;

   cout << "Value of numbers[2] before doubleElement: " << numbers[2] << endl;
   doubleElement(numbers[2]);
   cout << "Value of numbers[2] after doubleElement: " << numbers[2] << endl;

   return 0;
}
