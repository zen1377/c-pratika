// Функція приймає масив точок і його розмір, повертає кількість точок, що задовольняють умову. x і y > 0
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int count_first_quadrant(struct Point points[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            count++;
        }
    }
    return count;
}

void print_point(struct Point p) {
    printf("%d, %d\n", p.x, p.y);
}

int main() {
    struct Point points[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }
    
    for (int i = 0; i < 3; i++) {
        print_point(points[i]);
    }
    int result = count_first_quadrant(points, 3);
    printf("Count: %d\n", result);
    
    return 0;
}