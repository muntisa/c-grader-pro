C-GRADER PRO - INFORME FINAL DE EVALUACIONES - Exams-Pro1-C-2025
Generado: 26/12/2025, 3:31:46
Total de Alumnos: 2

--------------------------------------------------------------------------------
ALUMNO: Student2
NOTA: 10/10

REGISTRO DE ERRORES:
PUNTUACIÓN PERFECTA - SIN DEDUCCIONES

CÓDIGO ANOTADO:
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
ALUMNO: Student1
NOTA: 6/10

REGISTRO DE ERRORES:
1. Error Funcional (-2): La función `sumflow` tiene errores lógicos y de indexación. Intenta acceder a `matrix[5][7]` que está fuera de los límites de la matriz. Además, la lógica para calcular la suma es incorrecta y no cumple con los requisitos del problema.
2. Error Funcional (-1): La función `sumflow` imprime el resultado en lugar de retornarlo, lo cual no cumple con la especificación de la función `sumRow`.
3. Error de Estilo (-1): La función `sumflow` tiene un nombre incorrecto. Debería ser `sumRow`.

CÓDIGO ANOTADO:
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

int sumflow(int matrix[5][7]) { // PROFESSOR: Nombre incorrecto de la función. Debería ser sumRow.
    int n;
    printf("Enter the number of the row: ");
    scanf("%d", &n);
    matrix[5][7] = matrix[n][7]; // PROFESSOR: Acceso fuera de los límites de la matriz. matrix[5][7] no existe. Además, esta asignación no tiene sentido.
    int sum = 0;
    for (int i=0; i<n; i++) { // PROFESSOR: Este bucle no es correcto. Debería iterar solo sobre las columnas de la fila 'n'.
        for (int j=0; j<7; j++) {
            sum = sum + (int)matrix[i,j]; // PROFESSOR: Sintaxis incorrecta para acceder a los elementos de la matriz. Debería ser matrix[i][j].
        }
    }
    printf("Total hours studied in one subject: %d", sum); // PROFESSOR: La función debe retornar la suma, no imprimirla.
}

int main() {

    int matrix[5][7];

    loadMatrix(matrix);
    printMatrix(matrix);
    sumflow(matrix);

    return 0;
}
