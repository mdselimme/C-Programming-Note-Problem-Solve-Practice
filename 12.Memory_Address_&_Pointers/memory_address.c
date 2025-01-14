#include <stdio.h>

int main () {
    printf("C memory address.\n");
    // declare a variable
    int myNum = 83;
    //print the location of the variable
    //format specifires is (p)
    printf("memory address : %p", &myNum);
    return 0;
}