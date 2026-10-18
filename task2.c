// вивчити функції. max_element
#include <stdio.h>

int search_max() {
    int masive[5];
    printf("Напиши пять будь яких чисел");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &masive[i]);
    }
    int max = masive[0];
    for (int j = 0; j < 5; j++) {
        if (masive[j] > max) {
            max = masive[j];
        }
    }
    return max;
}
int main() {
    int result = search_max();
    printf("Максимум: %d", result);
    return 0;
}
