#include <stdio.h>

int main () {
    printf("C break in loop.\n");
    for (int i = 0; i < 10; i++)
    {
        
        if(i == 5){
            printf("break %d\n", i);
            // after printing 5 break the loop 
            break;
        }
        printf("%d\n", i);
    }
    
    return 0;
}