#include <stdio.h>

/*
    int - 2 or 4 bytes
    float - 4 bytes
    double - 8 bytes
    char - 1 bytes
    use lu - (long unsigned) it's safer to use
*/

int main(){
    printf("Memory size of Operator.\n");
    int num = 12;
    float result_number = 500;
    double youthage = 18.025;
    char resultGpa = 'A';
    printf("integer memory size: %lu,\nfloating memory size: %lu,\ndouble memory size: %lu,\ncharacter m size: %lu.", sizeof(num), sizeof(result_number), sizeof(youthage), sizeof(resultGpa));
    return 0;
}