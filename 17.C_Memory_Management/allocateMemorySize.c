#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("Allocate Memory Size\n");
    int *students;
    int numOfStudents = 12;
    students = calloc(numOfStudents, sizeof(*students));
    printf("Num of memory size : %d", numOfStudents * sizeof(*students));
    return 0;
}