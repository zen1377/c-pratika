// напиши функцію int sum_array(int arr[], int size) яка приймає масив і розмір через параметри і повертає суму елементів. В main — запитай N чисел, передай масив у функцію, виведи результат.
#include <stdio.h>
int sum_array(int arr[], int size) {
    int sum = 0;
    for (int j = 0; j < size; j++) {
        sum = sum + arr[j];
    }
    return sum;
}

int main() {
    int size = 0;
    printf("введи розмір масиву");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sum_array(arr, size);
    printf("%d", result);
    return 0;
}