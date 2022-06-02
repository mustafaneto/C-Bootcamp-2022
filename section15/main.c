#include <stdio.h>
#include <stdlib.h>

int main()
{

    //----------------------------------
    int i, number;

    printf("How many asterisks do you want?");
    scanf("%d",&number);
    i = 1;
    while( i<=number) {
        printf("*");
        i++;
    }

    //-------------------------------------


    int a, number,pow;

    printf("Please digit the number: ");
    scanf("%d",&number);
    printf("Please digit the power: ");
    scanf("%d",&pow);
    a = number;
    while( pow > 1) {
        pow--;
        number *= a;
    }
    printf("The result of the calculation is %d", number);

    //-------------------------------------

    int i=1, a=0, grade;
    float average;
    printf("Please type all your grades, if you wanna stop just digit [-1]\n");
    scanf("%d",&grade);
    while(grade != -1){
        a += grade;
        average = (float)a/i;
        scanf("%d", &grade);
        i++;
    }
    printf("The average grades is: %.2f", average);

    //--------------------------------------------------

    int grade;

    do {
        printf("Enter your grade: \n");
        scanf("%d", &grade);
    } while(grade < 0 || grade > 100);
        printf("Thanks! You've inserted %d, which is a legit grade!\n", grade);

    //---------------------------------------------------

    int number, a;
    int i, pow;

    printf("Please, enter a number: \n");
    scanf("%d",&number);
    printf("Please, enter the power: \n");
    scanf("%d",&pow);
    a = number;

    for (i = pow; i > 1; i--){
        number = number * a;
    }

    printf("The result is %d", number);

    //-------------------------------------------

    int i;

    for(i=1;i<=10;i++){
        printf("I'm sorry for not listening to my *Teacher*. I will practice more next time!\n");
    }

    //----------------------------------

    int n,i,j;
    printf("Please enter the pyramid length: \n");
    scanf("%d",&n);

    for (i=1; i <= n; i++){
        for (j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }

    //------------------------------------------------
    int n,i,j;
    printf("Please enter the pyramid length: \n");
    scanf("%d",&n);

    for (i=1; i <= n; i++){
        for (j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
    }

    //--------------------------------------------------

    float money = 0.01;
    int day = 1;

    while(day<=30) {
        money = money * 2;
        day++;
    }
    printf("The total amount of money in 30 days it would be: %f", money);

    return 0;
}


