#include <stdio.h>

int main() {
    int a[10];
    int parna_suma = 0;
    int neparna_suma = 0;


    // запитуємо користувача ввести 10 цілих чисел
    printf("Введіть 10 цілих чисел:\n");
    for (int i = 0; i < 10; i++) {
        printf("  a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // обчислюємо суму парних та непарних елементів масиву
    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            parna_suma += a[i];
        } else {
            neparna_suma += a[i];
        }
    }
    
    printf("Сума парних елементів: %d\n", parna_suma);
    printf("Сума непарних елементів: %d\n", neparna_suma);
    
    return 0;

}