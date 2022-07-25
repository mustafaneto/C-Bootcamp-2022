#include <stdio.h>
#include <stdlib.h>

float rectangleArea() {
    float height, width;
    printf("Please enter the heigth!\n");
    scanf("%f", &height);
    printf("Please enter the width!\n");
    scanf("%f", &width);

    return (height*width);
}

int twoDigitMax() {
    printf("Enter a two digit-number: \n");
    int number;
    scanf("%d",&number);
    if(number > 99 || number < 10) {
        printf("Error! Not 2-digits number");
    } else {
        int unidade = 0, dezena = 0;
        unidade = number % 10;
        dezena = (number - unidade) / 10;
        if (dezena>unidade) {
            printf("Maximum digit = %d", dezena);
        } else {
            printf("Maximum digit = %d", unidade);
        }
    }
}

int factorial() {
    printf("Enter a number: \n");
    int number, i;
    scanf("%d",&number);
    int mult = 1;
    for (i=number; i>=1; i--) {
        mult *= i;
    }
    return mult;
}

int isEvenOdd() {
    printf("Enter a number: \n");
    int number;
    scanf("%d",&number);
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int sequenceNumbers() {
    printf("Enter a number: \n");
    int number,i;
    scanf("%d", &number);
    if (number<10){
        for(i=1;i<=number;i++){
            printf("%d", i);
        }
    } else {
        for(i=1;i<=number;i++){
            printf("%d", 9);
        }
    }
}

char toLower(char letter) {
    if (letter >= 'A' && letter <= 'Z') {
        return letter - 'A' + 'a';
    } else if (letter >= 'a' && letter <= 'z') {
        return letter - 'a' + 'A';
    } else return -1;
}

int threeChar(char n1, char n2, char n3) {
    int hundreds, tens, units;
    int finalResult;

    if (n1 >= '0' && n1 <= '9') {
        hundreds = n1 - '0';
    }
    else return 0;

    if (n2 >= '0' && n2 <= '9') {
        tens = n2 - '0';
    }
    else return 0;

    if (n3 >= '0' && n3 <= '9') {
        units = n3 - '0';
    }
    else return 0;

    return hundreds*100 + tens*10 + units;
}

float averageAmount(int num, int digit) {
    int counter = 0;
    int inicial = num;
    int sum = 0;
    if (num < 0) {
        num = num * (-1);
    }
    while(num != 0) {
        if (num % 10 < digit) {
            counter++;
            sum += num % 10;
        }
        num = num/10;
    }
    printf("Total Amount of Digits in %d = %d\n", inicial, counter);
    return (float)sum/counter;
}

float derivative(float c, float x, float n) {
    float powerValue = pow(x, n-1);
    return n*c*powerValue;
}

int sumDivisors(int num) {
    int soma = 0;
    while (num != 0) {
        if (num % 2 == 0) {
            soma += num;
        }
        num--;
    }
    return soma;
}



int main()
{
    //printf("Area is equal to: %.2f",rectangleArea());
    //printf(twoDigitMax());
    //printf("Fatorial: %d", factorial());
    /*
        if(isEven() == 1) {
        printf("The number is even");
    } else printf("The number is odd");
    */
    //sequenceNumbers();
    /*
    char myChar;
    scanf("%c", &myChar);
        if(toLower(myChar) == -1){
        printf("Is not a letter!");
    } else printf("%c", toLower(myChar));

    char n1,n2,n3;
    scanf("%c\n%c\n%c", &n1,&n2,&n3);
    printf("%d",threeChar(n1,n2,n3));

    int n1,n2;
    scanf("%d%d", &n1,&n2);
    printf("%.2f",averageAmount(n1,n2));
    */
    int n1;
    scanf("%d", &n1);
    printf("%d",sumDivisors(n1));
}
