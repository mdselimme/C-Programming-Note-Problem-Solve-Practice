#include <stdio.h>

int main () {
    // size of array 
    int arrNum[] = {5,6,7,8,9,65};
    printf("%lu\n", sizeof(arrNum));
    // length of array 
    int lengthOfArray = sizeof(arrNum) / sizeof(arrNum[0]);
    printf("%d\n", lengthOfArray);
    // loop through in an array 
    for(int i = 0; i < lengthOfArray; i++){
        printf("%d\n", arrNum[i]);
    }
    return 0;
}