// stalin sort 😨

#include <stdio.h>


void stalin_sort(size_t *length, int array[*length])
{

    if (*length == 0) return;

    int max = array[];
    int write = 1;
    for (int i = 1; i < *length; i++) {
        if (array[i] >= max) {
            array[write] = array[i];
            max = array[i];
            write++;
        }

    }
    *length = write;
}
