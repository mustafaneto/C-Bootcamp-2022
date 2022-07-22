#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    printf("A sequencia de numero sera: \n");
    for(i = 1; i<=num; i++) {
        printf("%d,", i);
    }
    printf("\n");
    for(i = num; i>=1; i--) {
        printf("%d,", i);
    }

    //----------------------------------------

    int num, i;
    int soma = 0;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    printf("A soma dos numeros ate o escolhido sera: \n");
    for(i = 1; i<=num; i++) {
        soma += i;
    }
    printf("%d", soma);

    //----------------------------------------

    int num, i;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    printf("A tabela de multiplicacao sera: \n");
    for(i = 1; i<=10; i++) {
        printf("%d * %d = %d\n", num, i, (num*i));
    }

    //----------------------------------------

    int num, i, j;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    printf("Os primeiros %d numeros pares sao: \n", num);

        for(j=2;num>0;j++){
            if(j%2==0){
                printf("%d,",j);
                num--;
            }
        }

    //----------------------------------------

    int i, j, k;
    int blankSpaces;
    int n;
    int currentValue = 1;

    printf("Insira o numero de linhas da piramide: ");
    scanf("%d", &n);

    blankSpaces=n-1;

    for(i=1;i<=n;i++){
        for(k=blankSpaces;k>=1;k--) {
            printf(" ");
        }

        for(j=1;j<=i;j++){
            printf("%d ", currentValue);
            currentValue+=1;
        }
        printf("\n");
        blankSpaces--;
    }

    //----------------------------------------

    int num, i;
    int soma=0;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    printf("A soma dos numeros divisiveis por 3 e 5 sera: \n");
    for(i = 1; i<=num; i++) {
        if (i%3==0 && i%5==0){
            soma+=i;
        }
    }
    printf("\n");

    //----------------------------------------

    int num, i;
    int soma=0;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    printf("A soma dos numeros divisiveis por 3 ou 5 sera: \n");
    for(i = 1; i<=num; i++) {
        if (i%3==0 || i%5==0){
            soma+=i;
        }
    }
    printf("%d\n", soma);

    //----------------------------------------

    int tam, i;
    printf("Digite o tamanho da sequencia: \n");
    scanf("%d", &tam);

    int vetor[tam];

    printf("Agora digite os valores da sequencia: \n");
    for(i=0;i<=tam-1;i++){
            scanf("%d", &vetor[i]);
    }

    printf("A sequencia escrita foi: \n");
    for(i=0;i<=tam-1;i++){
        printf("%d ", vetor[i]);
    }

    int cond = 0;

    for(i=1;i<=tam-1;i++){
        if(vetor[i]<vetor[i-1]){
            cond++;
        }
    }

    if(cond==0){
        printf("\nSequencia em ordem crescente");
    } else {
        printf("\nSequencia nao esta em ordem crescente");
    }
    printf("\n");

    //----------------------------------------

    int currentDigit;
    int num;
    int evenSum = 0, oddSum = 0;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    while(num>0){
        currentDigit = num % 10;
        if(currentDigit % 2 == 0) {
            evenSum += currentDigit;
        } else {
            oddSum += currentDigit;
        }
        num = num / 10;
    }
    printf("%d", (evenSum - oddSum));

    //----------------------------------------


    return 0;

}
