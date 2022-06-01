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

    //---------------------------------

    int num1, num2;
    printf("Please type one number: \n");
    scanf("%d",&num1);
    printf("Please type another number: \n");
    scanf("%d",&num2);

    if (num1 > num2)
        printf("%d is the greatest number", num1);
    else
        printf("%d is the greatest number", num2);

    //---------------------------------

    int number;
    printf("Type one number please: \n");
    scanf("%d", &number);
    if ( number % 2 == 0 )
        printf("%d is an even number", number);
    else
        printf("%d is an odd number", number);

    //---------------------------------

    float numf1, numf2;
    printf("Please type one float number: \n");
    scanf("%f",&numf1);
    printf("Please type another float number: \n");
    scanf("%f",&numf2);

    if (numf1 > numf2)
        printf("Maximum: %.2f\nMinimum: %.2f", numf1, numf2);
    else
        printf("Maximum: %.2f\nMinimum: %.2f", numf2, numf1);
    //---------------------------------

    int num1, num2, num3;
    printf("Please type 3 numbers: \n");
    printf("1-");
    scanf("%d",&num1);
    printf("2-");
    scanf("%d",&num2);
    printf("3-");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3)
        if (num2 > num3)
        printf("Maximum: %d\nMinimum: %d", num1, num3);
        else
        printf("Maximum: %d\nMinimum: %d", num1, num2);
    else if (num2 > num1 && num2 > num3)
        if (num1 > num3)
        printf("Maximum: %d\nMinimum: %d", num2, num3);
        else
        printf("Maximum: %d\nMinimum: %d", num2, num1);
    else
        if (num1 > num2)
        printf("Maximum: %d\nMinimum: %d", num3, num2);
        else
        printf("Maximum: %d\nMinimum: %d", num3, num1);

    //---------------------------------

    int grade;
    printf("Please type your grade value: \n");
    scanf("%d", &grade);
    if (grade >= 80)
        printf("Excellent Job!");
    else if (grade >= 60)
        printf("Not bad...");
    else
        printf("Oh... You didn't pass...");

    //---------------------------------

    char grade;
    printf("Please, enter your grade(A-F): \n");
    scanf("%c", &grade);
    switch(grade)
    {
    case 'A':
        printf("Grade between 90-100 \n");
        break;
    case 'B':
        printf("Grade between 80-89 \n");
        break;
    case 'C':
        printf("Grade between 70-79 \n");
        break;
    case 'D':
        printf("Grade between 60-69 \n");
        break;
    case 'E':
        printf("Grade between 40-59 \n");
        break;
    case 'F':
        printf("Grade between 0-39 \n");
        break;
    default:
        printf("ERROR... Try Again! \n");
        break;
    }

    //---------------------------------


    int num1, num2;
    char operation;

    printf("Welcome to Mustafa's Calculator\n");
    printf("Please, insert two numbers and the operation that you desire to calculate: \n");
    printf("First Number: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Operation:\n'+'\n'-'\n'*'\n'/'\n'%%'\n");
    printf("Operator: ");
    scanf("%c", &operation);

    printf("Second Number: ");
    scanf("%d", &num2);

    switch(operation)
    {
    case '+':
        printf("%d", (num1+num2));
        break;
    case '-':
        printf("%d", (num1-num2));
        break;
    case '*':
        printf("%d", (num1*num2));
        break;
    case '/':
        if(num2 == 0) {
            printf("Impossible to divide by 0... Try again!");
            break;
        }
        printf("%.2f", ((float)num1/(float)num2));
        break;
    case '%':
        printf("%d", (num1%num2));
        break;
    default:
        printf("Invalid operator, please try again...");
    }



    //------------------------------

    int value1, value2;
    printf("Digit two numbers: \n");
    printf("Number 1: \n");
    scanf("%d",&value1);
    printf("Number 2: \n");
    scanf("%d",&value2);


    if(value1 == value2)
        printf("EQUAL");
    else
        printf("NOT EQUAL");

    //-----------------------------

    int value1, value2,value3;
    printf("Digit three numbers: \n");
    printf("Number 1: \n");
    scanf("%d",&value1);
    printf("Number 2: \n");
    scanf("%d",&value2);
    printf("Number 3: \n");
    scanf("%d",&value3);


    if(value1 == value2 && value1 == value3)
        printf("EQUAL");
    else
        printf("NOT EQUAL");


    //---------------------------------

    int number;
    int cen,dez,uni;
    printf("Please type a three-digit integer value: \n");
    scanf("%d", &number);
    cen = number / 100;
    dez = (number % 100) / 10;
    uni = (number % 10);

    if (cen < dez && dez < uni)
        printf("ASCENDING (%d<%d<%d)", cen,dez,uni);
    else
        printf("NOT ASCENDING");

    //---------------------------------



    int number;
    printf("Please type a number: \n");
    scanf("%d", &number);

    if (number > 0)
        printf("1");
    else if (number < 0)
        printf("-1");
    else
        printf("0");



    return 0;


}
