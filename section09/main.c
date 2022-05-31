#include <stdio.h>
#include <stdlib.h>


int main()
{

    printf("Please, type the current year: \n");
    int year;
    scanf("%d",&year);
    printf("Please, type your age: \n");
    int age;
    scanf("%d",&age);

    printf("Your birth year is %d \n", (year-age));

    printf("Please, type the rectangle height: \n");
    double height;
    scanf("%lf",&height);

    printf("Please, type rectangle width: \n");
    double width;

    scanf("%lf",&width);
    double area;

    area = height * width;
    printf("The rectangle area is %.2lf \n", area);

    double altu, larg, perimeter;

    printf("Please, type the rectangle height: \n");

    scanf("%lf",&altu);

    printf("Please, type the rectangle width: \n");

    scanf("%lf",&larg);

    perimeter = altu + altu + larg + larg;

    printf("The perimeter is: %lf\n", perimeter);

    int grade1, grade2, grade3;
    double average;
    printf("Please type your first grade: \n");
    scanf("%d",&grade1);
    printf("Please type your second grade: \n");
    scanf("%d",&grade2);
    printf("Please type your third grade: \n");
    scanf("%d",&grade3);
    average = ((double)grade1+grade2+grade3)/3;
    printf("Your average score is: %lf", average);

    double celcius, fahren;

    printf("Please type the current temperature: ");
    scanf("%lf", &celcius);
    fahren = (celcius * 1.8)+32;
    printf("This temperature in Fahrenheit is equivalent to: %.2lf", fahren);

    double celcius, fahren;

    printf("Please type the current temperature: ");
    scanf("%lf", &fahren);
    celcius = (fahren - 32)/1.8;
    printf("This temperature in Fahrenheit is equivalent to: %.2lf", celcius);

}
