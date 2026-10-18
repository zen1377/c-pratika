// Growing Plant

#include <stdio.h>

int growing_speed = 100;
int falling_speed = 10;
int desiredHeight = 910;

int height = 0;
int days = 0;

int main() {
    while (height < desiredHeight) {
        days++;
        // day
        height += growing_speed;
        printf("After day %d -> %d\n", days, height);
        if (height >= desiredHeight)
            break;
        // night
        height -= falling_speed;
        printf("After night %d -> %d\n", days, height);
    }
    printf("\nReached in %d days\n", days);
    return 0;
}