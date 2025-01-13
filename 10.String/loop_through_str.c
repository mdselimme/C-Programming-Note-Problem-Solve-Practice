#include <stdio.h>

int main () {
    // loop through string 
    char hello[] = "Hello Guys";
    int length = sizeof(hello) / sizeof(hello[0]);
    for (int i = 0; i < length; ++i)
    {
        printf("%c\n", hello[i]);
    }
    return 0;
}