// Напиши програму, яка: Читає число N від користувача. Динамічно виділяє пам'ять для масиву з N цілих чисел.
// Читає N чисел від користувача. 
// Виводить їх у зворотньому порядку. 
// Звільняє пам'ять після використання.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = n -1; j >=0; j--) {
        printf("%d ", arr[j]);
    }
    
    free(arr);

    return 0;
}