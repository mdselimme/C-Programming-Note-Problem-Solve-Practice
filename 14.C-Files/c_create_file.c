#include <stdio.h>

int main(){
    printf("Create file in Pc by C program.\n");
    FILE *fptr;
    fptr = fopen("creat-file.txt", "w");
    fclose(fptr);
    return 0;
}