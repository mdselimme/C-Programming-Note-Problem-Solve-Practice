#include <stdio.h>

int main () {
    char nam[30];
    printf("Enter your name: ");
    fgets(nam, sizeof(nam), stdin);
    printf("Hello %s\n", nam);
    return 0;
}