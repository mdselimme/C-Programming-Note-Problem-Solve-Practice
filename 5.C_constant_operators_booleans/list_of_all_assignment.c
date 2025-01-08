#include <stdio.h>

int main(){
    printf("List of all assignment\n");
    // Addition Assignment +=
    int addAss = 10; //int addAss = addAss + 5;
    addAss += 5;
    printf("Addition Assignment: %d.\n", addAss);
    // Subtraction Assignment -=
    int subAss = 10;
    subAss -= 5;
    printf("Subtraction Assignment: %d.\n", subAss);
    // Multiplication Assignment *=
    int multiAss = 10;
    multiAss *= 5;
    printf("Multiplication Assignment: %d.\n", multiAss);
    // Divison Assignment /=
    int divisonAss = 10;
    divisonAss /= 5;
    printf("Divison Assignment: %d.\n", divisonAss);
    // Modulus Assignment %=
    int modAss = 10;
    modAss %= 5;
    printf("Modulus Assignment: %d.\n", modAss);
    // Bitwise Or Assignment |=
    int bitwiseOrAss = 0;
    bitwiseOrAss |= 1;
    printf("Bitwise or Assignment: %d.\n", bitwiseOrAss);
    // Bitwise and Assignment &=
    int bitwiseAndAss = 0;
    bitwiseAndAss &= 1;
    printf("Bitwise and Assignment: %d.\n", bitwiseAndAss);
    // Bitwise XOR Assignment ^=
    int bitwiseXorAss = 1;//001
    bitwiseXorAss ^= 2;//010
    printf("Bitwise XOR Assignment: %d.\n", bitwiseXorAss);
    // Left shift operation Assignment <<=
    int leftShiftAss = 8;
    leftShiftAss <<= 2;
    printf("left shift operation Assignment: %d.\n", leftShiftAss);
    // right shift operation Assignment >>=
    int rightShiftAss = 8;
    rightShiftAss >>= 2;
    printf("Right Shift operation Assignment: %d.\n", rightShiftAss);
    return 0;
}