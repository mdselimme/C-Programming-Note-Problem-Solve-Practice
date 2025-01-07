#include <stdio.h>

/*

    constant is a variable that you cannot change the value and you can only use it.
*/

int main(){
    printf("Constant variable in c\n");
    const int numb= 10;
    printf("%d", numb);
    // numb = 12;constant variable cannot reasign value;
    printf("%d", numb);
    return 0;
}