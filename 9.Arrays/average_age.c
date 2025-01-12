#include <stdio.h>

int main () {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int ageLen = sizeof(ages) / sizeof(ages[0]);
    float allageSum = 0;
    for (int i = 0; i < ageLen; i++)
    {
        allageSum += ages[i];
    }
    float avgAge = allageSum / ageLen;
    printf("average age = %.2f", avgAge);
    return 0;
}