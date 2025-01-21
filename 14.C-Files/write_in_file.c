#include <stdio.h>

int main () {
    FILE *fptr;

    fptr = fopen("creat-file.txt", "w");

    fprintf(fptr, "Create And Write file in C programming");

   
    

    fclose(fptr);

    return 0;
}