#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    int a1,an,n;
    float sum;
    printf("Please type the first element of the sequence: \n");
    scanf("%d", &a1);
    printf("Please type the last element of the sequence: \n");
    scanf("%d", &an);
    printf("Please type how many elements the sequence has: \n");
    scanf("%d", &n);

    sum = (a1 + an) * n/2;
    printf("The total sum is %.2lf", sum);

    int sal, hours;
    float monthlysal;
    printf("Please type your salary per hours: \n");
    scanf("%d", &sal);
    printf("Please type how many hours you worked in a month: \n");
    scanf("%d", &hours);

    monthlysal = sal * hours;
    printf("Your monthly salary is: %.2lf", monthlysal);

    int distance, speed;
    float minutes;
    int time;
    printf("Please type the distance between the cities (km): \n");
    scanf("%d", &distance);
    printf("Please type the speed that the vehicle is going to drive (km/h): \n");
    scanf("%d", &speed);
    time = distance/speed;
    minutes = (distance % speed) / (speed/(60.0));
    printf("You gonna take %d hours and %.2f minutes to reach your destination!", time, minutes);


    int seconds, hours, minutes, remaining;
    printf("Please type the time in seconds: \n");
    scanf("%d", &seconds);
    hours = seconds/3600;
    minutes = (seconds - 3600) / 60;
    remaining = (seconds - 3600) % 60;
    printf("We have %d hours %d minutes and %d seconds remaining", hours, minutes, remaining);


    float data, result;
    int element;
    scanf("%f", &data);
    printf("%f\n", data);
    element = data;
    printf("%d\n", element);
    result = data - element;
    printf("%f", result);


    int number, centena, dezena, unidade;
    scanf("%d", &number);
    centena = number / 100;

    dezena = (number / 10) % 10;

    unidade = number % 10;

    printf("%d", (centena+dezena+unidade));

    int number, centena, dezena, unidade;
    scanf("%d", &number);
    centena = number / 100;

    dezena = (number / 10) % 10;

    unidade = number % 10;

    printf("%d%d%d", unidade,dezena,centena);


    int x1,x2, y1, y2;
    float distance;
    printf("This program calculates the distance between 2 points (x1,y1) and (x2,y2)\n");
    printf("Please type the value of x1: \n");
    scanf("%d",&x1);
    printf("Please type the value of y1: \n");
    scanf("%d",&y1);
    printf("Please type the value of x2: \n");
    scanf("%d",&x2);
    printf("Please type the value of y2: \n");
    scanf("%d",&y2);

    distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("The distance between the points is %.2f", distance);
    */
    int x;
    scanf("%d", &x);
    printf("%d^2: %.2lf\n",x, pow(x,2));
    printf("%d^4: %.2lf\n",x, pow(x,4));
    printf("%d^6: %.2lf\n",x, pow(x,6));
    printf("%d^8: %.2lf\n",x, pow(x,8));


    return 0;
}
