#include <stdio.h>

int main () {
    int n = 20;
    float f = 10.5;
    double z = 56.1474;
    char c = 'A';
    printf("%lu\n",sizeof n);
    printf("%lu\n",sizeof f);
    printf("%lu\n",sizeof z);
    printf("%lu\n",sizeof c);
    return 0;
}