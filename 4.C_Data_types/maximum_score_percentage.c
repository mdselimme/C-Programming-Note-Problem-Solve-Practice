#include <stdio.h>

int main(){
    printf("Percentage finder. Enter a number under 500 because 500 is maximum value: ");
    int user_input_number = 225;
    int maximum_number = 500;
    float hundred = 100;
    float percentage_result = (float) user_input_number / maximum_number * hundred;
    printf("\nPercentager is : %.2f", percentage_result);
    return 0;
}