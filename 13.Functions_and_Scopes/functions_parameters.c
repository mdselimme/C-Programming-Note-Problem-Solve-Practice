#include <stdio.h>

// my first function 
void hello(char myName[], int age){
    printf("Hello ! %s. I am %d old.\n", myName, age);
}

// calculate sum function 
void calCulateSum(int x, int y){
    int sum = x + y;
    printf("Sum of : %d + %d = %d.\n", x, y, sum);
}

// print array of numbers functions
void printArray(int myNum[4]){
    
    for(int j = 0; j < 4; j++ ){
        printf("Number = %d.\n", myNum[j]);
    }
}

// main is a function 
int main () {
    printf("Functions and Scopes.\n");
    //call hello function
    hello("Akbar",21);
    hello("Mahin",25);
    hello("Muhin",27);
    //calCulateSum function called
    calCulateSum(20, 25);
    calCulateSum(30, 55);
    calCulateSum(40, 25);
    // printArray function called
    int myNum[4] = {20,15,30,45};
    printArray(myNum);
    return 0;
}
