#include <iostream>
using namespace std;

// تابع يقوم بمضاعفة عناصر المصفوفة الأصلية
void doubleArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[3] = {2, 4, 6};
    doubleArray(arr, 3);
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
