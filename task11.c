// вивести точку (x,y) через struct і додати її через зміщення через ще одну struct точку 
#include <stdio.h>

struct Point {
    int x;
    int y;
};

void print_point(struct Point p) {
    printf("%d, %d\n", p.x, p.y);
}

struct Point move_point(struct Point p, int dx, int dy) {
    struct Point moved;
    moved.x = p.x + dx;
    moved.y = p.y + dy;

    return moved;
    
}



int main() {
    struct Point p1;
    struct Point move;
    
    p1.x = 1;
    p1.y = 3;
    
    print_point(p1);

    struct Point moved = move_point(p1, 2, -1);
    print_point(moved);
    return 0;
}