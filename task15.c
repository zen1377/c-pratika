// Напиши функцію, яка видаляє дубльовані точки з масиву.
#include <stdio.h>

struct Points
{
    int x;
    int y;
};


int remove_duplicates(struct Points points[], int size) {
    for (int i = 0; i < size; i ++) {
        for (int j = i+1; j < size; j++) {
            if (points[i].x == points[j].x && points[i].y == points[j].y) {
                for (int k = j; k < size - 1; k++) {
                    points[k] = points[k + 1];
                }
                size--;
                j--;
            }
            
        }
    }
    return size;
}

int main() {
    struct Points points[6] = {
        {1, 2},
        {3, 4},
        {1, 2},
        {5, 6},
        {3, 4},
        {7, 8}
    };
    int size = 6;
    
    printf("До видалення:\n");
    for (int i = 0; i < size; i++) {
        printf("%d, %d\n", points[i].x, points[i].y);
    }
    size = remove_duplicates(points, size);
    printf("\nПісля видалення:\n");
    for (int i = 0; i < size; i++) {
        printf("%d, %d\n", points[i].x, points[i].y);
    }
    
    return 0;
}
