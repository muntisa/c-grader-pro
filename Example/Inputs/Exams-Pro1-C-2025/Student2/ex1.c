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

    printf("\nWeekly Matrix:\n");
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
        printf("Enter number of hours for 7 days for Subject %d: ", i + 1);
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