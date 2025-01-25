#include <stdio.h>

enum Level{
    LOW = 1,
    MEDIUM,
    HIGH
};

int main(){
    printf("switch method in c.\n");
    enum Level myNum = HIGH;
    switch(myNum)
   {
     case 1:
    printf("This is Low");
    break;
    case 2:
    printf("Number medium");
    break;
    case 3:
    printf("Number is High");
    break;
   };
    return 0;
};