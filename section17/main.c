#include <stdio.h>
#include <stdlib.h>

void greetingFunction() {
    printf("Hello!\nWelcome to the best course in C Programming Language!\nGood Luck!");
}

void printMinMax(int num1,int num2) {
    if (num1 > num2) {
        printf("Maximum: %d\nMinimum: %d", num1, num2);
    } else
        printf("Maximum: %d\nMinimum: %d", num2, num1);
}

int threeNumbersMax()
{
    int num1, num2, num3;
    printf("Enter num1, num2, num3: \n");
    scanf("%d%d%d", &num1,&num2,&num3);

    if(num1 > num2)
        if(num1 > num3)
            return num1;
        else
            return num3;
    else if (num2 > num3)
        return num2;
    else return num3;

}

float averageGrade(int num1, int num2, int num3) {
    float avg;
    avg = (num1+num2+num3)/3.0;
    return avg;
}


int main()
{
    int a,b,c;
    printf("Enter 3 grades: \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Average: %.2f", averageGrade(a,b,c) );
    return 0;

}
