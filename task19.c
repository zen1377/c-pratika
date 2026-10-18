// Напиши функцію, що знаходить суму всіх елементів матриці 3x3.

#include <stdio.h>

int sum_matrix(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j =  0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11},
    };
    
    printf("Матриця:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    int sum = sum_matrix(matrix);
    printf("Сума всіх елементів: %d\n", sum);
    return 0;
}