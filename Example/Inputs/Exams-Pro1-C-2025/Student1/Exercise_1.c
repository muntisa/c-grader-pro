#include <stdio.h>

void loadMatrix(int matrix[5][7]) {
    printf("Enter values for the matrix:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[5][7]) {
    printf("Matrix:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int sumflow(int matrix[5][7]) {
    int n;
    printf("Enter the number of the row: ");
    scanf("%d", &n);
    matrix[5][7] = matrix[n][7];
    int sum = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<7; j++) {
            sum = sum + (int)matrix[i,j];
        }
    }
    printf("Total hours studied in one subject: %d", sum);
}

int main() {

    int matrix[5][7];

    loadMatrix(matrix);
    printMatrix(matrix);
    sumflow(matrix);

    return 0;
}