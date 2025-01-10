#include <stdio.h>

int main () {

    printf("Nested for loop\n");

    // main loop 
    for (int i = 1; i < 5; i++)
    {
        // j runs 4 times 
        printf("i = %d.\n", i);
        // nested loop 
        for (int j = 1; j <= i; j++)
        {
            // this loop runs 10 times 
            printf("j = %d.\n", j);
        }
    }
    

    return 0;
}