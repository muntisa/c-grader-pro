#include <stdio.h>
#define SUBJECTS 5
#define DAYS 7

void loadMatrix(int m[][DAYS]) {
    for (int i = 0; i < SUBJECTS; i++) {
        for (int j = 0; j < DAYS; j++) {
            printf("Hours studied for subject %d on day %d: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void printMatrix(int m[][DAYS]) {
    printf("\nStudy Hours Matrix (5 subjects × 7 days):\n");
    for (int i = 0; i < SUBJECTS; i++) {
        for (int j = 0; j < DAYS; j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

int sumRow(int m[][DAYS], int row) {
    int sum = 0;
    for (int j = 0; j < DAYS; j++) {
        sum += m[row][j];
    }
    return sum;
}

int main() {
    int m[SUBJECTS][DAYS];

    loadMatrix(m);
    printMatrix(m);

    printf("\nTotal hours per subject (over 7 days):\n");
    for (int i = 0; i < SUBJECTS; i++) {
        printf("Subject %d: %d hours\n", i + 1, sumRow(m, i));
    }

    return 0;
}
