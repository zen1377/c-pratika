// Напиши функцию, що рахує суму діагоналей матриці 4x4.

#include <stdio.h>

int sum_diagonals(int matrix[4][4]) {    
    int sum = 0;
    for (int i = 0; i < 4; i++) {        
        sum += matrix[i][i];
    }
    for (int i = 0; i < 4; i++) {
        if (i != 3 - i) {
            sum += matrix[i][3-i];
        }
    }
    return sum;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int sum = sum_diagonals(matrix);
    printf("Сума діагоналей: %d\n", sum);
    
    return 0;
}
