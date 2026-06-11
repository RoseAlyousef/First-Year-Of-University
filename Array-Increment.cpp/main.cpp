#include <iostream>
using namespace std;
void increaseArray(int arr[], int size) {
   for (int i = 0; i < size; i++)
       arr[i] = arr[i] + 1;
}
int main() {
   int x[3] = {1, 2, 3};
   increaseArray(x, 3);

   for (int i = 0; i < 3; i++)
       cout << x[i] << " ";

   return 0;
}
