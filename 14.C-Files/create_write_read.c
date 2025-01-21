#include <stdio.h>

int main () {
    printf("Create, Write and Read file in C.\n");
    FILE *fptr;

    fptr = fopen("pratice.txt", "a");

   fprintf(fptr, "Hello World!\n");
   fprintf(fptr, "Hello Srabon!\n");

   char myText[100];

    fptr = fopen("pratice.txt", "r");

   while (fgets(myText, 100, fptr))
   {
    printf("%s", myText);
   }
   

    fclose(fptr);

    return 0;
}