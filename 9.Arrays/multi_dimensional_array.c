#include <stdio.h>

int main () {
    //mulDimArr is an array which has 3 rows and 4 colums;
    int mulDimArr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // access the value of multi dimensonal array 
    printf("%d", mulDimArr[1][2]);
    return 0;
}