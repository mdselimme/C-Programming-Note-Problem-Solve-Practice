#include <stdio.h>

// declare a function above main function and definition below main 
// declare function 
void myNumber(int x , int y);
void myOtherNumber(int sum);

int main () {
    printf("Function Declaration in C\n");
    // call the function 
    myNumber(10,5);
    return 0;
}

void myNumber(int x , int y){
    printf("Hello decleration %d + %d = %d\n", x , y, x+y);
    myOtherNumber(x+y);
}

void myOtherNumber(int sum){
    printf("Hello Other decleration %d", sum);
}
