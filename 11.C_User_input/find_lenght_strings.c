#include <stdio.h>
#include <string.h>


int main () {
    printf("Enter word : ");

    char word[30];

    fgets(word, sizeof(word), stdin);

    printf("\nWord is : %s. and length is %d", word, strlen(word));

    return 0;
}