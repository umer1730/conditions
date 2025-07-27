#include <iostream>

using namespace std;

const int COLS = 5; // Fixed column size

void largestColumnFirst(int M[][COLS], int rows) {
    int maxSum = 0, largestCol = 0;
    for (int col = 0; col < COLS; col++) {
        int sum = 0;
        for (int row = 0; row < rows; row++) {
            sum += M[row][col];
        }
        if (sum > maxSum) {
            maxSum = sum;
            largestCol = col;
        }
    }
    for (int row = 0; row < rows; row++) {
        swap(M[row][0], M[row][largestCol]);
    }
}
void printMatrix(int M[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;
    int M[rows][COLS]; 
    cout << "Enter matrix elements row by row:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> M[i][j];
        }
    }
    cout << "Original Matrix:\n";
    printMatrix(M, rows);
    largestColumnFirst(M, rows);
    cout << "\nMatrix after swapping the largest sum column with the first column:\n";
    printMatrix(M, rows);
    return 0;
}