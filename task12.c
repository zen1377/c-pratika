// Оголоси масив з 3 точок типу struct Point. Читай координати для кожної точки за допомогою scanf (у циклі).
// Виводь усі точки у форматі (x, y) за допомогою циклу та функції print_point.



#include <stdio.h>

struct Point {
    int x;
    int y;
};


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
return 0;
}