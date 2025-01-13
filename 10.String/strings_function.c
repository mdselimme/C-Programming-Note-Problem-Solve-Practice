#include <stdio.h>
#include <string.h>

int main () {
    printf("String function in c.\n");
    // string length 
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int length = strlen(alphabet);
    printf("%d\n", length);
    printf("%d\n", sizeof(alphabet));//it gives memory size
    // Concatenate Strings
    char hlw[] = "Hello";
    char wol[] = " World!";
    strcat(hlw, wol);
    printf("%s\n", hlw);
    // Strings copy 
    char hello[] = "Hello World!";
    char worl[30];
    strcpy(worl, hello);
    printf("%s\n", worl);
    //Compare string
    char a[] = "Hello";
    char b[] = "Hi Are you";
    char c[] = "Hello";
    printf("%d\n", strcmp(a, b));
    printf("%d\n", strcmp(a, c));
    printf("%d\n", strcmp(b, c));
    return 0;
}