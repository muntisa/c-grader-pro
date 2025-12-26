C-GRADER PRO - FINAL EVALUATIONS REPORT - Exams-Pro1-C-2025
Generated: 26/12/2025, 3:32:45
Total Students: 2

--------------------------------------------------------------------------------
STUDENT: Student2
GRADE: 10/10

ERROR LOG:
PERFECT SCORE - NO DEDUCTIONS

ANNOTATED CODE:
#include <stdio.h>

#define SUBJECTS 5
#define DAYS 7

void loadMatrix(int matrix[SUBJECTS][DAYS]);
void printMatrix(int matrix[SUBJECTS][DAYS]);
int sumRow(int matrix[SUBJECTS][DAYS], int row);

int main() {

    int studyHours[SUBJECTS][DAYS];
    int i;

    printf("Weekly Study Tracker\n");
    printf("Please enter study hours\n");
    printf("You can enter 7 numbers separated by space for each subject\n");

    loadMatrix(studyHours);

    printf("\nWeekly Matrix\n");
    printMatrix(studyHours);

    printf("\nTotals\n");
    for (i = 0; i < SUBJECTS; i++) {
        printf("Subject %d Total: %d hours\n", i + 1, sumRow(studyHours, i));
    }

    return 0;
}

void loadMatrix(int matrix[SUBJECTS][DAYS]) {
    int i, j;
    for (i = 0; i < SUBJECTS; i++) {
        printf("Enter 7 numbers for Subject %d (Mon -> Sun): ", i + 1);
        for (j = 0; j < DAYS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[SUBJECTS][DAYS]) {
    int i, j;
    printf("Mon Tue Wed Thu Fri Sat Sun\n");
    for (i = 0; i < SUBJECTS; i++) {
        printf("Subj %d: ", i + 1);
        for (j = 0; j < DAYS; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int sumRow(int matrix[SUBJECTS][DAYS], int row) {
    int j, total = 0;
    for (j = 0; j < DAYS; j++) {
        total += matrix[row][j];
    }
    return total;
}
--------------------------------------------------------------------------------
STUDENT: Student1
GRADE: 6/10

ERROR LOG:
1. Functional Error (-2): Incorrect implementation of sumRow function. It takes no row index as input, prompts the user for input, and accesses the array out of bounds (matrix[5][7]). It also calculates the sum incorrectly and prints the result inside the function instead of returning it.
2. Functional Error (-1): Incorrect indexing in sumRow function. Using comma operator instead of proper array indexing (matrix[i,j] instead of matrix[i][j]).
3. Code Quality (-1): The sumRow function should return the sum, not print it.

ANNOTATED CODE:
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

int sumflow(int matrix[5][7]) { // PROFESSOR: Function should take the row number as an argument.
    int n;
    printf("Enter the number of the row: ");
    scanf("%d", &n);
    matrix[5][7] = matrix[n][7]; // PROFESSOR: Out of bounds access. matrix[5][7] is outside the array.
    int sum = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<7; j++) {
            sum = sum + (int)matrix[i,j]; // PROFESSOR: Incorrect indexing. Should be matrix[i][j]. The comma operator is not array access.
        }
    }
    printf("Total hours studied in one subject: %d", sum); // PROFESSOR: The function should return the sum, not print it.
}

int main() {

    int matrix[5][7];

    loadMatrix(matrix);
    printMatrix(matrix);
    sumflow(matrix);

    return 0;
}
