#include <stdio.h>

int sum(int n);

int main () {
    printf("Function Recursion.\n");
    int result = sum(5);
    printf("sum = %d.\n", result);
    return 0;
}



int sum(int n){
    if(n>0){
       return n + sum(n-1);
    }else{
        return 0;
    }
}