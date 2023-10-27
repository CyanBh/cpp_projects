#include <iostream>
using namespace std;

// Function to take matrix input from the user
void inputMatrix(int matrix[][100], int rows, int columns) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][100], int rows, int columns) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to add two matrices
void addMatrix(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrix(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrix(int matrix1[][100], int matrix2[][100], int result[][100], int rows1, int columns1, int columns2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int matrix[][100], int rows, int columns) {
    int transposedMatrix[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[100][100], matrix2[100][100], result[100][100];
    int rows1, columns1, rows2, columns2;

    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> rows1 >> columns1;
    inputMatrix(matrix1, rows1, columns1);

    cout << "Enter the number of rows and columns for matrix 2: ";
    cin >> rows2 >> columns2;
    inputMatrix(matrix2, rows2, columns2);

    int choice;
    cout << "Menu:" << endl;
    cout << "1. Add matrices" << endl;
    cout << "2. Subtract matrices" << endl;
    cout << "3. Multiply matrices" << endl;
    cout << "4. Transpose matrix" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (rows1 == rows2 && columns1 == columns2) {
                addMatrix(matrix1, matrix2, result, rows1, columns1);
                displayMatrix(result, rows1, columns1);
            } else {
                cout << "Matrix addition is not possible. The matrices should have the same dimensions." << endl;
            }
            break;
        case 2:
            if (rows1 == rows2 && columns1 == columns2) {
                subtractMatrix(matrix1, matrix2, result, rows1, columns1);
                displayMatrix(result, rows1, columns1);
            } else {
                cout << "Matrix subtraction is not possible. The matrices should have the same dimensions." << endl;
            }
            break;
        case 3:
            if (columns1 == rows2) {
                multiplyMatrix(matrix1, matrix2, result, rows1, columns1, columns2);
                displayMatrix(result, rows1, columns2);
            } else {
                cout << "Matrix multiplication is not possible. The number of columns in matrix 1 should be equal to the number of rows in matrix 2." << endl;
            }
            break;
        case 4:
            transposeMatrix(matrix1, rows1, columns1);
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}
