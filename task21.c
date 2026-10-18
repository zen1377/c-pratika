// факторіал

#include <stdio.h>

int factorial(int n) {
    int result = n;
    if (n == 0) {
        return 1;
    }
    else if (n < 0)
    {
        return 0;
    }
    for (int i = 1; i < n; i++) {
        result *= (n-i);
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    int r_factorial = factorial(n);
    if (r_factorial == 0) {
        printf("Помилка введення числа для факторіала менше нуля");
    }
    else {
    printf("%d", r_factorial);
    }
    return 0;
}