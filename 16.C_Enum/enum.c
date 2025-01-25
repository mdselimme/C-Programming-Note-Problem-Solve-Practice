#include <stdio.h>

enum Level{
        High,
        Middle,
        Low
    };


int main(){
    printf("Hello World");
    enum Level myVar = Middle;
    printf("%d", myVar);
    return 0;
}