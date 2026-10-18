// Напиши функцію, яка знаходить точку з максимальною відстанню від початку координат (0, 0). (модуль вектора)

#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

void print_point(struct Point p) {
    printf("%d, %d\n", p.x, p.y);
}

struct Point find_farthest(struct Point points[], int size) {
    int max_index = 0;
    double max = 0;

    for (int i = 0; i < size; i++) {
        double dist = points[i].x * points[i].x + points[i].y * points[i].y;
        if (dist > max) {
            max = dist;
            max_index = i;  // Запам'ятай індекс
    }
}

return points[max_index];  // Повернувши саму точку
}


int main() {
    struct Point points[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }
    
    for (int i = 0; i < 3; i++) {
        print_point(points[i]);
    }

    struct Point farthest = find_farthest(points, 3);
    printf("farthest point: ");
    print_point(farthest);
    double module = sqrt(farthest.x * farthest.x + farthest.y * farthest.y);
    printf(" dist is: %lf", module);
    return 0;
}