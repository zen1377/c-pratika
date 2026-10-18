// напиши функцію int string_length(char str[]) яка повертає довжину рядка без використання strlen з бібліотеки. Тільки цикл і '\0'
// В main оголоси рядок char str[] = "hello" і виведи результат.


#include <stdio.h>


int string_lenth(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}


int main() {
    char str[] = "hello";
    int lenth = string_lenth(str);
    printf("%d", lenth);
    return 0;
}