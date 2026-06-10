#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   const int ARRAYSIZE = 10;
   int n[ARRAYSIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };

   cout << "Element" << setw(13) << "Value"
        << setw(17) << "Histogram" << endl;

   for (int i = 0; i < ARRAYSIZE; i++) {
       cout << setw(7) << i << setw(13)
            << n[i] << setw(9);

       for (int j = 0; j < n[i]; j++) {
           cout << "*";
       }
       cout << endl;
   }

   return 0;
}
