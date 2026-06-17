#include <iostream>
using namespace std;
int main() {
   const int SIZE = 5;
   int arr[SIZE];
   int searchKey;
   bool found = false;
   cout << "Enter 5 elements:\n";
   for (int i = 0; i < SIZE; i++) {
       cin >> arr[i];
   }
   cout << "Enter the element to search for: ";
   cin >> searchKey;

   for (int i = 0; i < SIZE; i++) {
       if (arr[i] == searchKey) {
           cout << "Element found at index: " << i << endl;
           found = true;
           break;
       }
   }
   if (!found) {
       cout << "Element not found in the array." << endl;
   }
   return 0;
}
