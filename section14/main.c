#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char myChar1 = 'a';
    char myChar2 = 97;
    char myChar3 = 0x61;

    printf("Character: %c \n", myChar1);
    printf("Decimal ASCII Code: %d \n", myChar1);
    printf("Hexadecimal ASCII Code: %X \n", myChar1);

    printf("Character: %c \n", myChar2);
    printf("Decimal ASCII Code: %d \n", myChar2);
    printf("Hexadecimal ASCII Code: %X \n", myChar2);

    printf("Character: %c \n", myChar3);
    printf("Decimal ASCII Code: %d \n", myChar3);
    printf("Hexadecimal ASCII Code: %X \n", myChar3);

    //-------------------------------------------------------

    int ano,mes,dia;
    printf("Digite uma data, informe primeiro o ano: \n");
    scanf("%d",&ano);
    printf("Informe agora o mes: \n");
    scanf("%d",&mes);
    printf("Informe o dia: \n");
    scanf("%d",&dia);
    printf("O valor em Hexadecimal da sua data eh equivalente a: \n");
    printf("%x-%x-%x (ano-mes-dia)", ano,mes,dia);

    //--------------------------------------------------------


    char myChar;
    printf("Please enter a character: \n");
    scanf("%c", &myChar);

    if (myChar >= 48 && myChar <= 57 ) {
        printf("The character is: a digit!");
    } else if (myChar >= 65 && myChar <= 90) {
        printf("The character is: a Uppercase letter!");
    } else if (myChar >= 97 && myChar <= 122) {
        printf("The character is: a Lowercase letter!");
    } else {
        printf("Is something else!");
    }

    //----------------------------------------------------------
    */

    char myChar;
    printf("Please enter a '1-digit' value in Hexadecimal Format: \n");
    scanf("%X", &myChar);
    printf("Binary format: ");
    switch(myChar) {

case 0:
printf("0");
break;
case 1:
printf("1");
break;

case 2:
printf("10");
break;

case 3:
printf("11");
break;

case 4:
printf("100");
break;

case 5:
printf("101");
break;

case 6:
printf("110");
break;

case 7:
printf("111");
break;

case 8:
printf("1000");
break;

case 9:
printf("1001");
break;

case 10:
printf("1010");
break;

case 11:
printf("1011");
break;

case 12:
printf("1100");
break;

case 13:
printf("1101");
break;

case 14:
printf("1110");
break;

case 15:
printf("1111");
break;


default:
    printf("\nNot valid! Try again...");
    break;

    }


    return 0;

}
