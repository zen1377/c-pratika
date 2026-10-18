#include <stdio.h>

// Напиши програму яка просить користувача ввести N чисел, зберігає їх в масив, і виводить їх у зворотньому порядку.

int reverse() {
    int quantity;
    printf("Введіть кількість чисел: ");
    scanf("%d", &quantity);
    int numbers[quantity];
    for (int i = 0; i < quantity; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Числа у зворотньому порядку: ");
    for (int j = quantity -1; j >=0; j--) {
        printf("%d ", numbers[j]);
    }
return 0;
}

int six_seven {
    printf("67");
}

int main() {
    six_seven();
    reverse();
    return 0;
}
