#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Error Cheking\n");
    int *ptr1, *ptr2;
    ptr1 = malloc(4);
    ptr2 = realloc(ptr1, 7);
    if(ptr2 == NULL){
        printf("Failed to reallocate memory.\n");
    }else{
         printf("Success. 8 bytes reallocated at address %p \n", ptr2);
         ptr1 = ptr2;  // Update ptr1 to point to the newly allocated memory
    }
    return 0;
}