#include <stdio.h>

int main () {
    FILE *fptr;

    fptr = fopen("creat-file.txt", "r");

    char myText[100];

    fgets(myText, 100, fptr);

    // printf("%s", myText);

    while(fgets(myText, 100, fptr)){
        printf("%s", myText);
    }

    fclose(fptr);

    return 0;
}