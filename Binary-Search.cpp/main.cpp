#include <iostream>
using namespace std;


int binarySearch(int arr[], int key, int low, int high) {
    while (low <= high) {
        int middle = (low + high) / 2;

        if (key == arr[middle])
            return middle;
        else if (key < arr[middle])
            high = middle - 1;
        else
            low = middle + 1;
    }
    return -1;
}

int main() {
    const int size = 15;
    int a[size];

    for (int i = 0; i < size; i++) a[i] = 2 * i;

    int key;
    cout << "Enter a number to search (0 to 28): ";
    cin >> key;

    int result = binarySearch(a, key, 0, size - 1);

    if (result != -1)
        cout << key << " found at index " << result << endl;
    else
        cout << key << " not found" << endl;

    return 0;
}
