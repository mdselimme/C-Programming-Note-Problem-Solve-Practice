#include <stdio.h>

int main(){
    printf("Number precision.\n");
    // if you want to remove extra zeros in c float and dobule variables then you have to add (%.2f).
    float num = 10;
    printf("delete extra zero: %.2f", num);//print two number after point(.);
    double numDouble = 456.166465;
    printf("dobuble number cut : %.2lf", numDouble);
    return 0;
};