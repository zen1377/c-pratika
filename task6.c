// напиши функцію void to_uppercase(char str[]) яка перетворює рядок у верхній регістр на місці. Без бібліотек

#include <stdio.h>

void to_uppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

int main() {
    char str[] = "hello";
    to_uppercase(str);
    printf("%s", str);
    return 0;
}