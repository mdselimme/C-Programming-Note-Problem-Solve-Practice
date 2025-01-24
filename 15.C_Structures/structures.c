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
    struct myStructures s2;
    s1.myChar = 'A';
    s1.myNum = 15;
    s2.myChar = 'B';
    s2.myNum = 20;
    // print structers value 
    printf("Number is : %d\n", s1.myNum);
    printf("Character is : %c\n", s1.myChar);
    printf("Number is s2 : %d\n", s2.myNum);
    printf("Character is s2 : %c\n", s2.myChar);
    return 0;
}