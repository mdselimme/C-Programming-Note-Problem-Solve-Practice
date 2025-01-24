#include <stdio.h>
#include <string.h>

struct myValChange{
    int number;
    char myName[30];
};

int main () {
    printf("Struct value modify.\n");
    struct myValChange se1 = {20, "Who ther hell are you"};
    printf("number : %d, message : %s\n", se1.number, se1.myName);
    se1.number = 50;
    strcpy(se1.myName, "I am your father");
    printf("number : %d, message : %s\n", se1.number, se1.myName);
    struct myValChange se2;
    se2 = se1;
     se2.number = 100;
    strcpy(se2.myName, "I am your grandfather");
    printf("number : %d, message : %s\n", se2.number, se2.myName);
    return 0;
}