// Записує в файл numbers.txt числа від 1 до 10.
//Читає цей файл і виводить суму всіх чисел.

#include <stdio.h>
#include <stdlib.h>



int main() {
    FILE *f = fopen("numbers.txt", "w"); 
    
    for(int i = 0; i <= 10; i++) {
        fprintf(f, "%d\n", i);
    }          
    fclose(f);                           

    f = fopen("numbers.txt", "r"); 
    int sum = 0;
    int num = 0;
    while (fscanf(f, "%d", &num) == 1) { /* успішне читання рядка (правильний код)*/
    sum += num;
}
    fclose(f);

    printf("Сума: %d\n", sum);

    return 0;
}