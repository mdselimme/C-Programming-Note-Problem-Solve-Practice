#include <stdio.h>

int main () {
    printf("Hello Arrays.\n");
    // declare an array 
    int physics_number[] = {10, 20, 30, 40, 50, 60};
    // print an array value in index number 
    printf("%d\n", physics_number[0]);
    physics_number[0] = 50;
    printf("%d\n", physics_number[0]);
    // set array size 
    int num[4];
    // assign value in array 
    //also don't mixing data type like type is integer you have to assign integer value 
    num[0] = 5;
    num[1] = 6;
    num[2] = 7;
    num[3] =8;
    printf("%d", num[0]);
    return 0;
}