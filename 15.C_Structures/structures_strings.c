#include <stdio.h>

struct myStringStructure{
    int num;
    char myStr[30];
};

int main () {
    struct myStringStructure s1 = {2, "Hi Soleman. How are you ?\n"};
    printf("number : %d, message : %s", s1.num, s1.myStr);
    struct myStringStructure s2;
    s2 = s1;
      printf("s2 number : %d, message : %s", s2.num, s2.myStr);
    return 0;
}