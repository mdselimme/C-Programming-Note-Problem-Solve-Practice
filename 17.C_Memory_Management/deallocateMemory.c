#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Free memory Or Deallocate Memory\n");
    int *ptr;
    ptr = malloc(sizeof(*ptr));
    printf("%d", ptr);
    if (ptr == NULL) {
        printf("Unable to allocate memory\n");
        return 1;
    };
    *ptr = 20;
    printf("Integer value: %d\n", *ptr);
    free(ptr);
    ptr = NULL;
     if (ptr == NULL) {
        printf("Unable to allocate memory\n");
        return 1;
    };
    printf("Integer value: %d\n", *ptr);
    return 0;
}