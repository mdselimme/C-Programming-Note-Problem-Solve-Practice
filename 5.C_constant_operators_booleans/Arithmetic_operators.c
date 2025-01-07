#include <stdio.h>


int main(){
    printf("Arithmetic Operators\n");
    // Addition (+)
    int x, y;
    x = 10; 
    y= 5;
    int add = x + y;
    printf("Addition is : %d\n", add);
    // Subtraction (-)
    int sub = x - y;
     printf("Subtraction is : %d\n", sub);
    // Multiplication (*)
    int multi = x * y;
     printf("Multipication is : %d\n", multi);
    // Divison (/)
    int division = x / y;
     printf("Divison is : %d\n", division);
    // Modulus (%)
    int modulus = x % y;
     printf("Modulus is : %d\n", modulus);
    // Increment (++)
    int inc = ++x;
     printf("Increment is : %d\n", inc);
    // Decrement (--)
    int dec = --x;
     printf("Decrement is : %d\n", dec);

    return 0;
}