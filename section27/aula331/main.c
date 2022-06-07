#include <stdio.h>
#include <stdlib.h>

typedef struct rational {
    int numerator;
    int denominator;
}Rational;

void increment(Rational* p){
    (*p).numerator = (*p).numerator + (*p).denominator;
}

void decrement(Rational* p){
    (*p).numerator = (*p).numerator - (*p).denominator;
}

float addition(Rational n1,Rational n2) {
    float soma1 = (float)n1.numerator / n1.denominator;
    float soma2 = (float)n2.numerator / n2.denominator;

    float result = soma1 + soma2;
    return result;
}

float subtraction(Rational n1,Rational n2) {
    float sub1 = (float)n1.numerator / n1.denominator;
    float sub2 = (float)n2.numerator / n2.denominator;

    float result = sub1 - sub2;
    return result;
}

float multiplication(Rational n1,Rational n2) {
    float mul1 = (float)n1.numerator / n1.denominator;
    float mul2 = (float)n2.numerator / n2.denominator;

    float result = mul1 * mul2;
    return result;
}

float division(Rational n1,Rational n2) {
    float div1 = (float)n1.numerator / n1.denominator;
    float div2 = (float)n2.numerator / n2.denominator;

    float result = div1 / div2;
    return result;
}

int smaller(Rational n1,Rational n2) {
    float div1 = (float)n1.numerator / n1.denominator;
    float div2 = (float)n2.numerator / n2.denominator;

    if (div1 > div2) {
        return 1;
    } else if (div1 == div2) {
        return -1;
    } else
        return 0;
}

int equal(Rational n1,Rational n2) {
    float div1 = (float)n1.numerator / n1.denominator;
    float div2 = (float)n2.numerator / n2.denominator;

    if (div1 == div2) {
        return 1;
    } else
        return 0;
}




int main()
{

    Rational num1 = {3,1}, num2 = {3,1};
    printf("The first rational number is %d/%d\n", num1.numerator, num1.denominator);
    printf("The second rational number is %d/%d\n", num2.numerator, num2.denominator);
    increment(&num1);
    increment(&num2);
    printf("The first rational number is %d/%d\n", num1.numerator, num1.denominator);
    printf("The second rational number is %d/%d\n", num2.numerator, num2.denominator);
    decrement(&num1);
    decrement(&num2);
    printf("The first rational number is %d/%d\n", num1.numerator, num1.denominator);
    printf("The second rational number is %d/%d\n", num2.numerator, num2.denominator);
    float soma = addition(num1, num2);
    printf("Soma is: %.2f\n", soma);
    float sub = subtraction(num1, num2);
    printf("Subtraction is: %.2f\n", sub);
    float mul = multiplication(num1,num2);
    printf("Multiplication is: %.2f\n", mul);
    float div = division(num1, num2);
    printf("Division is: %.2f\n", div);
    int greaterBoth = smaller(num1, num2);
    if (greaterBoth == 1) {
        printf("The first number is greater than the second!\n");
    }
    else if (greaterBoth == -1) {
        printf("The second number is equal to the first!\n");
    }
    else {
        printf("The second number is greater than the first!\n");
    }
    int equalBoth = equal(num1, num2);

    if (equalBoth == 1) {
        printf("The numbers are the same!\n");
    } else {
        printf("The numbers are different!\n");
    }

    return 0;

}
