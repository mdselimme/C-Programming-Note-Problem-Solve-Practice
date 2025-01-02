#include <stdio.h>

/*
    --- Variable type ---
    - Intergers Number -> int
    - Floating Point Number -> float
    - Character type -> char

    -- Formatr Specifier for print variable value --
    - int -> %d
    - float -> %f
    - char -> %c

*/

/*

--Variables Naming
* make variable name understand line oneMinuteSeconds = 60; is good and understandable*
* don't use any keyword name for writing a variable*
* Don't started a variable first letter of any number or any capital letter to write a variable name.*

*/


int main(){
    printf("Learn Variables\n");
    // integer type variable ;
    int num = 10;
    // float type variable
    float num_2 = 10.02;
    // character type variable 
    char first_latter = 'S';
    printf("Integer = %d,\nFloating = %f,\nCharacter = %c\n", num, num_2, first_latter);

    // integer type variable value change 

    num = 50;
    printf("Variable value now %d", num);

    int myLuckeyNumber = num;

    printf("\n%d", myLuckeyNumber);

    // assign multiple variable;
    int x, y, z;
    x=y=z=myLuckeyNumber;
    printf("\nNumber 1 : %d\nNumber 2 : %d\nNumber 3 : %d\n", x,y,z);

    return 0;
}