#include <stdio.h>


int main(){
    printf("if else statement.\n");
    int x , y;
    x = 10;
    y=10;
    if(x>y){
        printf("x is greater than y.\n");
    }
    else if(x == y){
        printf("x is equal to y.\n");   
    }
    else{
        printf("y is greater than x.\n");
    }
    return 0;
}