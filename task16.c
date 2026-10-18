// Напиши функцію, яка знаходить усі точки в масиві, що лежать в прямокутнику (заданому двома точками — верхній лівий кут та нижній правий кут).

#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int count_in_rectangle(struct Point points[], int size, 
                       struct Point top_left, struct Point bottom_right) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (points[i].x >= top_left.x && points[i].x <= bottom_right.x) {
            if (points[i].y >= top_left.y && points[i].y <= bottom_right.y) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    struct Point top_left = {0, 0};
    struct Point bottom_right = {3, 3};
    struct Point points[6] = {

        {1, 2},
        {3, 4},
        {1, 2},
        {5, 6},
        {3, 4},
        {7, 8}
    };

    int result = count_in_rectangle(points, 6, top_left, bottom_right);
    printf("Точок у прямокутнику: %d\n", result);
    return 0;
}