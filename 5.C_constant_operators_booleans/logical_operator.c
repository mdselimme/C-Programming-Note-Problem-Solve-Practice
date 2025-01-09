#include <stdio.h>


int main(){
    printf("Logical Operator\n");
    // if the comparison is true then it gives (1) answer otherwise gives (0);
    int x = 10;
    int y = 12;
    int z = 15;
    // and operator
    //have to two comparison is true;
    printf("and %d\n", x < y && y<z);
    // or operator
    //have to one comparison is true;
    printf("and %d\n", x > y || y<z);
    // not operator
    //have to two comparison is true (!) this operator changed the value false;
    printf("and %d\n", !(x < y && y<z));
    
    return 0;
}