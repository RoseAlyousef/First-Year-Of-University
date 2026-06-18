#include <iostream>
using namespace std;

// 1. تابع جمع مصفوفتين
void addMatrices(int A[][3], int B[][3], int C[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// 2. تابع ضرب مصفوفتين وطباعتها
void multiplyMatrices(int A[][3], int B[][3], int C[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}

void flattenMatrix(int src[][3], int dest[], int size) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            dest[index++] = src[i][j];
        }
    }
}


void printConditionalMatrix(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j) cout << matrix[i][j] << "\t";
            else cout << 0 << "\t";
        }
        cout << endl;
    }
}

// 5. تابع طباعة السطر الثاني والقطر الرئيسي والثانوي
void printRowAndDiagonal(int matrix[][3], int size) {
    cout << "Row 2: ";
    for (int j = 0; j < 3; j++) cout << matrix[1][j] << " ";
    cout << "\nMain Diagonal: ";
    for (int i = 0; i < size; i++) cout << matrix[i][i] << " ";
    cout << "\nSecondary Diagonal: ";
    for (int i = 0; i < size; i++) cout << matrix[i][size - 1 - i] << " ";
    cout << endl;
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int sumResult[3][3], productResult[3][3], flatArray[9];

    cout << "1. Matrices Multiplication:\n";
    multiplyMatrices(mat1, mat2, productResult, 3);

    cout << "\n2. Conditional Matrix:\n";
    printConditionalMatrix(mat1, 3);

    cout << "\n3. Rows and Diagonals:\n";
    printRowAndDiagonal(mat1, 3);

    return 0;
}
