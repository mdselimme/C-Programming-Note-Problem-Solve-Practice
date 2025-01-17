#include <stdio.h>

int y = 20;
int z = 5;

void myNumber() {
  // Local variable that belongs to myFunction
  int x = 5;
   int y = 30; 
//    this line increase z variable value 6  
   ++z;
  // Print the variable x
  printf("%d\n", x);
}

int main () {
    printf("Function Scope in C\n");
    // but it's gives an error.because x cannot use outside mynumber function 
    //  printf("%d", x);
    //-- cannot change the value of y
    myNumber();
     printf("%d\n", y);
     printf("%d\n", z);
    
    return 0;
}