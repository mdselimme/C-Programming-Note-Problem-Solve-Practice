#include <stdio.h>

// my first function 
void myFirstFunction(){
    printf("This is my first function.\n");
}

void calCulateSum(){
    int x, y;
    x =10;
    y=20;
    int sum = x + y;
    printf("x + y = %d.\n", sum);
}

// main is a function 
int main () {
    printf("Functions and Scopes.\n");
    //call the function
    myFirstFunction();
    // called multiple times 
    myFirstFunction();
    myFirstFunction();
    //call calculate function
    calCulateSum();
    return 0;
}
