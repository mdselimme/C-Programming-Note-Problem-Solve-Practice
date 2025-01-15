#include <stdio.h>

int main () {
    printf("Array and Pointer.\n");
    char myRoll[4] = {1,5,7,8};
    int length = sizeof(myRoll) / sizeof(myRoll[0]);
    for(int j = 0; j < length; j++){
        printf("Number is : %d - Memory Address is : %p.\n", myRoll[j], &myRoll[j]);
    };
    return 0;
}