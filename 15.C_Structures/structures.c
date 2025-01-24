#include <stdio.h>

// define a structures 
struct myStructures
{
    int myNum;
    char myChar;
};



int main () {
    printf("Hello World Structures.\n");
    // write a structures variable name;
    // assgin value in structers 
    struct myStructures s1;
    s1.myChar = 'A';
    s1.myNum = 15;
    // print structers value 
    printf("Number is : %d\n", s1.myNum);
    printf("Character is : %c", s1.myChar);
    return 0;
}