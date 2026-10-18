#include <stdio.h>

int scnd_max(int arr[], int size) {
    int max = arr[0];
    int second = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] < max) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("%d", scnd_max(arr, size)); 

    return 0;
} 