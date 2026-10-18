// Напиши функцію void increment_all(int *arr, int size) яка збільшує кожен елемент масиву на 1. В main передай масив і виведи до і після.

#include <stdio.h>

void increment_all(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i]++;
    }
}

int main() {
    int arr[] = {1, 5, 13,2, 6492, 727};
    int size = 6;
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
    increment_all(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        printf(" ");
    }
    return 0;
}