#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("Memory Access\n");

    // Allocate Memory
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));

    // Write data to the memory 
    *ptr = 4;
    ptr[1] = 5;
    ptr[2] = 6;

    // Read From the memory 
    printf("data %d\n", *ptr);
    printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);

    int *ptr1 = malloc(4);
    char *ptr2 = (char*) ptr1;
    ptr1[0] = 1684234849;
    printf("%d is %c %c %c %c", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);
    return 0;
}