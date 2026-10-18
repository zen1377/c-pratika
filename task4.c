#include <stdio.h>

//void reverse_array(int arr[], int size) — перевертає масив на місці без другого масиву. Підказка: swap першого з останнім, другого з передостаннім, і так до середини.

void reverse_array(int arr[], int size) {
    for (int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 9};
    int size = 5;
    reverse_array(arr,size);
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}