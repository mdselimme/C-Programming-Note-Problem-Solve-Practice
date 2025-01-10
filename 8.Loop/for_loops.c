#include <stdio.h>

int main () {
    printf("For loop in C.\n");
    for (int i = 0; i < 10; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}