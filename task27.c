// Напиши функцію, що перевертає рядок на місці (без другого масиву).

#include <stdio.h>
#include <string.h>

void reverse_stray(char str[]) {
    for (int i = 0; i < strlen(str)/2; i++) {
        char temp = str[i];
        str[i] = str[strlen(str)-1-i];
        str[strlen(str)-1-i] = temp;
    }
}

int main() {
    char str[20];
    scanf("%19s", str);
    reverse_stray(str);
    printf("%s\n", str);
    return 0;
}