// напиши функцію int count_vowels(char str[]) яка рахує кількість голосних у рядку. Голосні: a, e, i, o, u — і великі і малі.

#include <stdio.h>

int count_vowels(char str[]) {
    int vowels[] = {65,69,73,79,85, 98,101,105,111,117}; //ascii коди для голосних
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j < 10; j++) {
            if (str[i] == vowels[j])
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "hello";
    int result = count_vowels(str);
    printf("%d", result);
    return 0;
}