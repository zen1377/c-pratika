// Напиши функцію, що перевіряє, чи рядок є палінромом (читається однаково в обидва боки).

#include <stdio.h>
#include <string.h>


int is_palindrome(char str[], int left, int right) {
    if (left >= right) { 
        return 1;  
    }
    
    if (str[left] != str[right]) {
        return 0;  
    }
    
    return is_palindrome(str, left + 1, right - 1);  // Рекурсія
}


int main() {
    char str[] = "racecar";
    int check =  is_palindrome(str, 0, strlen(str) - 1);
    if (check == 0) {
        printf("не паліндром");
    }
    else if (check == 1) {
        printf("паліндром");
    }
    
    return 0;
}