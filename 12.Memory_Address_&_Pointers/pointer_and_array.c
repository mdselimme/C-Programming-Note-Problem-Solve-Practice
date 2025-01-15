#include <stdio.h>

int main () {
    printf("Array and Pointer.\n");
    char myRoll[4] = {1,5,7,8};
    int length = sizeof(myRoll) / sizeof(myRoll[0]);
    for(int j = 0; j < length; j++){
        printf("Number is : %d - Memory Address is : %p.\n", myRoll[j], &myRoll[j]);
    };
    //Change array value by pointers
    char myNum[3] = {25,12,10};
    *myNum = 5;
    *(myNum + 1) = 14;
    printf("%d\n", *myNum);
    printf("%d\n", *(myNum+1));
    //change array to pointer array
    int myMoney[4] = {120,127,135,140};
    int *ptr = myMoney;
    for (int i = 0; i < 4; i++) {
    printf("%d\n", *(ptr + i));
}
    return 0;
}