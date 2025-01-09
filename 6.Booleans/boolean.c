#include <stdio.h>
// write to boolean data type you have to add this in header
#include <stdbool.h>

int main(){
    printf("Boolean Data type");
    bool isIamGood = true;
    bool youAreFine = false;
    bool yourMotherGood =true;
    //boolean returs 1 when the value is true or returns 0 when the value is false.
    printf("result : %d\n", isIamGood);
    printf("result : %d\n", youAreFine);
    printf("Your mother : %d", yourMotherGood == isIamGood);
    return 0;
}