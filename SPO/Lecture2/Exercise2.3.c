// Write a program that implements matrix multiplication using counting loop constructs

#include <stdio.h>

int main(void) {
    int matrix1[2][2] = { { 1, 2 }, { 3, 4 } };
    int matrix2[2][2] = { { 5, 6 }, { 7, 8 } };
    int result[2][2] = { { 0, 0 }, { 0, 0 } };

    // Multiply the matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result
    printf("Result: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
    }


}