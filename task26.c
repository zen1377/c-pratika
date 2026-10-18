#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student *students = malloc(n * sizeof(struct Student));
    if (students == NULL) return 1;
    for (int i = 0; i < n; i++) {
        scanf("%49s",students[i].name);
        scanf("%d", &students[i].grade);
    }
    double average = 0;
    for (int i = 0; i < n; i++) {
        average += students[i].grade;
    }
    average /= n;
    printf("%.2f\n", average);

    for (int i = 0; i < n; i++) {
        if (students[i].grade > average) {
            printf("%s\n", students[i].name);
            printf("%.2f\n", average);
        } 
    
    }
    
    free(students);

    return 0;
}