#include <stdio.h>
#include <stdlib.h>

void findMinMax(int num1, int num2, int *pMax, int *pMin){
        if(num1>num2){
            *pMin = num2;
            *pMax = num1;
        }
        else {
            *pMin = num1;
            *pMax = num2;
        }
    }

int main()
{

    int a = 5;
    int *p;
    p = &a;

    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%d ", *p);

    //-------------------------------

    int grade1=80, grade2=90;
    printf("Value - %d\n",grade1);
    printf("Address - %p\n",&grade1);
    printf("Value - %d\n",grade2);
    printf("Address - %p\n",&grade2);

    //--------------------------------


    int i, j;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &i,&j);
    int max, min;
    findMinMax(i,j,&max,&min);
    printf("The maximum value is: %d\n", max);
    printf("The minimum value is: %d\n", min);



    return 0;
}
