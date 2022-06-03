#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main()
{

    int grades[5];
    int i;
    int lowest_grade;

    for(i=0; i<5;i++)
    {
        printf("Enter grade no.%d: \n", i+1);
        scanf("%d",&grades[i]);
    }
    lowest_grade = grades[0];

    for( i=1; i<5; i++)
    {
        if(grades[i]<lowest_grade)
            lowest_grade=grades[i];
    }
    printf("%Your lowest grade is %d\n", lowest_grade);


    //---------------------------------------------------

    int numberPhone[9];
    int maxValue, i;

    printf("Please, enter every digit of your phone number:\n");
    for(i=0;i<9;i++){
        scanf("%d", &numberPhone[i]);
    }

    maxValue = numberPhone[0];

    for(i=1;i<=9;i++){
        if(maxValue < numberPhone[i])
            maxValue = numberPhone[i];
    }

    printf("The maximum value in your phone number is %d", maxValue);



    //---------------------------------------------------------

    int numberPhone[9];
    int maxValue, index, i;

    printf("Please, enter every digit of your phone number:\n");
    for(i=0;i<9;i++){
        scanf("%d", &numberPhone[i]);
    }

    index = 0;
    maxValue = numberPhone[0];

    for(i=1;i<=9;i++){
        if(maxValue < numberPhone[i]) {
            maxValue = numberPhone[i];
            index = i;
        }

    }

    printf("The maximum value in your phone number is %d and the index location is %d", maxValue, index);

    //----------------------------------------------------

    int numberPhone[SIZE];
    int maxValue, index, i;

    printf("Please, enter every digit of your phone number:\n");
    for(i=0;i< SIZE;i++){
        printf("Enter the %d digit: ", i+1);
        scanf("%d", &numberPhone[i]);
    }

    index = 0;
    maxValue = numberPhone[0];

    for(i=1;i<=SIZE;i++){
        if(maxValue < numberPhone[i]) {
            maxValue = numberPhone[i];
            index = i;
        }

    }
        printf("The maximum value in your phone number is %d and the index location is %d", maxValue, index);

    //-------------------------------------------------------------------

    //[1,3,2,6,3] has good neighbors in left and right
    //[4,4,7,4,9] doesn't have good neighbors

    int myarr[5];
    int i,result = 0;

    for(i=0;i<5;i++){
        printf("Please enter the n.%d value: ", i+1);
        scanf("%d", &myarr[i]);
    }

    for(i=1;i<5;i++) {
        if((myarr[i-1] * myarr[i+1])==myarr[i]){
            result++;
        }
    }

    if(result > 0)
        printf("Ok you have good neighbors!\nWhich it is a value that is equals to the multiplication of both its neighbors(right,left)");

    else
        printf("Doesn't have good neighbors!");

    //---------------------------------------------------------------------




    return 0;
}
