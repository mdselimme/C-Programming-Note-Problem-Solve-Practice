#include <stdio.h>

int main () {
    //string is an array of character;
    //string format specifires is s;
    // stings declare method 
    char hello[] = "Hello Guys";
    printf("%s\n", hello);
    printf("%c\n", hello[0]);
    hello[0] = 'S';
    printf("%c\n", hello[0]);
    printf("%s\n", hello);
    return 0;
}