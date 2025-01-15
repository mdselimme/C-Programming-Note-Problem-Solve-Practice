#include <stdio.h>

int mySum(int x, int y){
    return x + y;
}

int calculateSum(int x, int y){
    return x + y;
}

int main () {
    // function return value in c 
    printf("Sum is : %d.\n", mySum(3, 5));
    printf("Sum is : %d.\n", mySum(10, 5));
    printf("Sum is : %d.\n", mySum(18, 5));
    //calculate sum calls
    int result_1 = calculateSum(10,15);
    int result_2 = calculateSum(50,15);
    int result_3 = calculateSum(10,78);
    int result_4 = calculateSum(56,15);
    int result_5 = calculateSum(10,21);
    printf("Result Sum is : %d.\n", result_1);
    printf("Result Sum is : %d.\n", result_2);
    printf("Result Sum is : %d.\n", result_3);
    printf("Result Sum is : %d.\n", result_4);
    printf("Result Sum is : %d.\n", result_5);
    // make an array 
    int sumOfNum[5];
    sumOfNum[0] = result_1;
    sumOfNum[1] = result_2;
    sumOfNum[2] = result_3;
    sumOfNum[3] = result_4;
    sumOfNum[4] = result_5;
    for (int i = 0; i < 5; i++)
    {
        printf("Array Sum is : %d.\n", sumOfNum[i]);
    }
    return 0;
}