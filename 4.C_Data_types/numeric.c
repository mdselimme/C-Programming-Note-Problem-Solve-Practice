#include <stdio.h>

int main(){
    printf("Numeric Data types in C programming.\n");
    // integer data types when you need prints whole number without decimals 
    //integer format specifires is %d;
    int num = 514;
    printf("integer number : %d\n", num);
    // when you need to print decimals number then you have to use (float) and (double) type
    //float and double format specifires is %f and %lf;
    float numfloat = 45.50;
    double numDobule = 45.1558466;
    printf("float number %f and double number %lf.\n", numfloat, numDobule);
    //double can use e decimals number
    double mypop = 5E51;
    printf("hexadecimal : %lf." , mypop);
    return 0;
}