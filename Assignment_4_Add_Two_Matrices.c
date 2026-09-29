#include <stdio.h>

#define MAX 10

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[MAX][MAX], int b[MAX][MAX],
                 int sum[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || rows > MAX || cols <= 0 || cols > MAX) {
        printf("Invalid matrix size. Maximum size is 10 x 10.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    inputMatrix(a, rows, cols);

    printf("Enter elements of second matrix:\n");
    inputMatrix(b, rows, cols);

    addMatrices(a, b, sum, rows, cols);

    printf("\nSum of the two matrices:\n");
    displayMatrix(sum, rows, cols);

    return 0;
}
