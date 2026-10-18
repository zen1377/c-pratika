// написати програму, яка "перевертає" квадратну матрицю відносно головної діагоналі.


#include <stdio.h>

void transpose(int matrix[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[3][3] = 
    {{1, 2, 3}, 
    { 4, 5, 6}, 
    { 7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
    int result[3][3];
    transpose(matrix, result);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
    }
    printf("\n");
}
    printf("\n");
    return 0;
}