#include <stdio.h>

int main () {
    printf("Hello Arrays.\n");
    // declare an array 
    int physics_number[] = {10, 20, 30, 40, 50, 60};
    // print an array value in index number 
    printf("%d\n", physics_number[0]);
    physics_number[0] = 50;
    printf("%d\n", physics_number[0]);
    for (int i = 0; i < 6; i++)
    {
        printf("loop numb = %d\n", physics_number[i]);
    }
    
    return 0;
}