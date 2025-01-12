#include <stdio.h>

int main () {
    int numPhyMath[2][3] = {{10,20,30},{30,20,10}};
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3 ; j++)
        {
            printf("value = %d\n" , numPhyMath[i][j]);
        }  
    }
    return 0;
}