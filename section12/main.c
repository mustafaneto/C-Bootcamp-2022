#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Please type your grade: \n");
    scanf("%d", &grade);
    if (grade >= 7)
        printf("Congratulations! \n");
    else
        printf("Failed... Try again :( !\n");
    return 0;
}
