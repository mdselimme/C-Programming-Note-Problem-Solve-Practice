#include <stdio.h>

int main () {
    printf("Append text in an existing file.\n");
    FILE *fptr;
    fptr = fopen("creat-file.txt", "a");
    fprintf(fptr ,"\n Append this file.\n");
    fprintf(fptr ,"Also Append this.");
    fclose(fptr);
    return 0;
}