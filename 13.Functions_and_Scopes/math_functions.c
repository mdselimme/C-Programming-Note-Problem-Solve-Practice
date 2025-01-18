#include <stdio.h>
// math function needs this header 
#include <math.h>

int main () {
    printf("Math Functions.\n");
    printf("squre = %.2f\n", sqrt(16));
    printf("floor = %.2f\n", floor(1.4));
    printf("ceil = %.2f\n", ceil(1.4));
    printf("power = %.2f\n", pow(4,2));
    printf("round = %.2f\n", round(1.7));
    // give always positive number
    printf("absolute value = %.2f\n", fabs(-1.77));
 
    return 0;
}