#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("reallocate memory size.\n");
    // Allocate Memory For four intergers number 
    int *ptr1, *ptr2, size;
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);
    printf("%d bytes allocated at address %p \n", size, ptr1);
    // ReAllocate memory for six integers number 
    size = 6* sizeof(ptr1);
    ptr2 = realloc(ptr1, size);
    printf("%d bytes reallocated at address %p \n", size, ptr2);
    printf("%d bytes reallocated at address %p \n", size, ptr2);
    return 0;
}