#include <stdio.h>
#include <stdlib.h>
#define tam 3
#define size 5

int main()
{

    int i;

    int originalArray[tam] = {1 , 2, 2000};
    int copiedArray[tam];

    for(i=0;i<=tam-1;i++){
        copiedArray[i]=originalArray[i];
    }

    printf("Original Array ->");
    for(i=0;i<=tam-1;i++){
        printf("%d ",originalArray[i]);
    }

    printf("\nCopied Array ->");
    for(i=0;i<=tam-1;i++){
        printf("%d ",copiedArray[i]);
    }


    //--------------------------------------

    int flag = 1;
    int arr[size];

    for (i=0;i<=size-1;i++){
        scanf("%d", &arr[i]);
    }

    for (i=0; i<=size/2;i++){
        if(arr[i] != arr[size-1-i]) {
            flag = 0;
            break;
        }
    }

    if (flag==1){
        printf("The array is a Palindrome!!\n");
    } else if (flag==0) {
        printf("The array is NOT a Palindrome!!\n");
    }

    //--------------------------------------




    return 0;

}
