#include <stdio.h>

struct myStringStructure{
    int num;
    char myStr[30];
};

int main () {
    struct myStringStructure s1 = {2, "Hi Soleman. How are you ?"};
    printf("number : %d, message : %s", s1.num, s1.myStr);
    return 0;
}