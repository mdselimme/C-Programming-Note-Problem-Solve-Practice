#include <stdio.h>


int main(){
    printf("switch case default break.\n");
    int month;
    month = 2;
    switch (month) {
  case 1:
    printf("January");
    break;
  case 2:
    printf("Februay");
    break;
  case 3:
    printf("March");
    break;
  case 4:
    printf("April");
    break;
  case 5:
    printf("May");
    break;
  case 6:
    printf("June");
    break;
  case 7:
    printf("July");
    break;
  case 8:
    printf("August");
    break;
  case 9:
    printf("September");
    break;
  case 10:
    printf("October");
    break;
  case 11:
    printf("November");
    break;
  case 12:
    printf("December");
    break;
    default:
    printf("enter a number 1 - 12 show a month");
}
    return 0;
}