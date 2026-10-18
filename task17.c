// Напиши функцію, що сортує масив точок по відстані від початку координат (від найближчої до найдальшої).

#include <stdio.h>
#include <math.h>

struct Point
{
    int x;
    int y;
};

void sort_by_distance(struct Point points[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            double dist_j = sqrt(points[j].x*points[j].x + points[j].y*points[j].y);
            double dist_j1 = sqrt(points[j+1].x*points[j+1].x + points[j+1].y*points[j+1].y);
            if (dist_j > dist_j1) {
                struct Point temp = points[j];
                points[j] = points[j+1];
                points[j+1] = temp;
            }
        }
    }
    
}

int main() {
    struct Point points[6] = {

        {1, 2},
        {3, 4},
        {1, 2},
        {5, 6},
        {3, 4},
        {7, 8}
    };
    
    printf("До сортування:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d, %d\n", points[i].x, points[i].y);
    }
    
    sort_by_distance(points, 6);
    
    printf("\nПісля сортування:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d, %d\n", points[i].x, points[i].y);
    }

    return 0;
}