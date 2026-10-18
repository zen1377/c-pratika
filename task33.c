// шифр цезаря

#include <stdio.h>

int main() {
    int shift;
    printf("Enter the shift value: ");
    scanf("%d", &shift);

    char text[100];
    printf("enter the text: ");
    scanf("%s", text);

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + shift) % 26 + 26) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + shift) % 26 + 26) % 26 + 'A';
        }
        printf("%c", c);
    }
    printf("\n");

    return 0;
}

