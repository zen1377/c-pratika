// Напиши функцію, що рахує кількість цифр в числі рекурсивно.

#include <stdio.h>

int count_digits(int n) {
    if (n < 0) {
        n *= -1;
    }
    if (n < 10) {
        return 1;
    }
    return 1 + count_digits(n/10);
    
}

int main() {
    int count =  count_digits(32451231);
    printf("%d", count);
    // інші випадки
    count =  count_digits(-32451231);
    printf("%d", count);
    //перевірю діапазон від 0 до 10 
    count =  count_digits(0);
    printf("%d", count);
    return 0;
}