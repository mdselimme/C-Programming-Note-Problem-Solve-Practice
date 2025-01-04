#include <stdio.h>

/*
    There ar two type conversion in c
    1. Implicit Conversion (automatically)
    2. Explicit Conversion (manually)

*/

int main(){
    printf("Types convertion in C.\n");
    //Implicit Conversion
    // int to float;
    float num = 5;
    printf("%f", num);
    // float to int 
    int num_2 = num;
    printf("\n%d", num_2);

    // Explicit Conversion
    float num3 = (float) 5/2;
    printf("\n%.1f", num3);

    return 0;
};