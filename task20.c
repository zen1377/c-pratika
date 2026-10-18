// Напиши функцію, що знаходить позицію заданого елемента в матриці 4x4 (або повертає -1, якщо його немає).

#include <stdio.h>

int find_element(int matrix[4][4], int target) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == target) {
                return i * 4 + j;  
            }

        }
    }
    return -1;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }   
    int target;
    scanf("%d", &target);
    int result_id = find_element(matrix, target);
    printf("%d\n", result_id);
    return 0;
}