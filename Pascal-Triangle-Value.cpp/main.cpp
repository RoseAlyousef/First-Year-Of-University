#include <iostream>
using namespace std;

// تابع عودي لحساب قيم مثلث باسكال
int pascalValue(int row, int col) {
    if (col == 0 || row == col) {
        return 1; // الحواف دائماً تساوي 1
    } else {
        // كل عنصر يساوي مجموع العنصرين اللذين فوقه
        return pascalValue(row - 1, col - 1) + pascalValue(row - 1, col);
    }
}

int main() {
    int row, col;
    cout << "Enter row index: ";
    cin >> row;
    cout << "Enter column index: ";
    cin >> col;

    cout << "Value at position (" << row << ", " << col << ") is: " << pascalValue(row, col) << endl;
    return 0;
}
