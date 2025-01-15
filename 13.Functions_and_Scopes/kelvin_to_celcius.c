#include <stdio.h>

// degree to celcious function
float kelvinToCelcius(float kelvin){
    float cel = kelvin - 273.15;
   return cel;
}

// main is a function 
int main () {
    printf("Kelvin to celcious.\n");
    // call kelvinToCelcius func 
    float result = kelvinToCelcius(50);
    float result2 = kelvinToCelcius(390);
    float result3 = kelvinToCelcius(353);
    printf("Celcious is : %.2f degree Celcius.\n", result);
    printf("Celcious is : %.2f degree Celcius.\n", result2);
    printf("Celcious is : %.2f degree Celcius.\n", result3);
    return 0;
}
