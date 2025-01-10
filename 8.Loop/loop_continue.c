#include <stdio.h>

int main () {
    printf("C continue in loop.\n");
    for (int i = 0; i < 10; i++)
    {
        
        if(i == 5){
            // printf("continue %d\n", i);
            // continue without 5 
            continue;
        }
        printf("%d\n", i);
    }
    
    return 0;
}