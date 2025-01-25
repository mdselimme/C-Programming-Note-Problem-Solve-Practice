#include <stdio.h>

enum Level{
        Low = 125,
        Middle,
        High = 500,
        UpperHigh
    };


int main(){
    printf("Hello World\n");
    enum Level myVar1 = Low;
    enum Level myVar2 = Middle;
    enum Level myVar3 = High;
    enum Level myVarUpp = UpperHigh;
    printf("%d\n", myVar1);
    printf("%d\n", myVar2);
    printf("%d\n", myVar3);
    printf("%d\n", myVarUpp);
    return 0;
}