// void swap(int *a, int *b) яка міняє місцями два числа. В main оголоси два int, передай їх адреси у функцію, виведи результат до і після.

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 52;
    int b = 42;
    printf("%d", a);
    printf("%d", b);
    swap(&a, &b);
    printf("%d", a);
    printf("%d", b);
    return 0;
}