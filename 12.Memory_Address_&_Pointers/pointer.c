#include <stdio.h>

int main () {
    printf("Pointers in c.\n");
    int maAge = 43;
    //two methods create pointer variable-- int* ptr = &maAge; -- int *ptr = &maAge;
    int* ptr = &maAge;
     printf("My is %d.\n", maAge);
      printf("Memory address is %p.\n", &maAge);
      printf("Memory address is %p.\n", ptr);
      printf("Memory address is %d.\n", *ptr);
    return 0;
}