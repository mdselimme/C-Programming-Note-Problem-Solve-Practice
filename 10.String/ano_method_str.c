#include <stdio.h>

int main () {

    // declare a string like an array 
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";
    printf("%s\n", greetings);
    printf("%d\n", sizeof(greetings));
    printf("%s\n", greetings2);
    printf("%d\n", sizeof(greetings2));

    return 0;
}