#include <stdio.h>
#include <stdlib.h>

#define SIZE 11
int main()
{

    int my2DArray[2][3] = {{1,5,9},{2,6,10}};
    int i,j;

    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%d ", my2DArray[i][j]);
        }
        printf("\n");
    }

    //---------------------------------------------



    int i,j;
    int mat[SIZE][SIZE];

    for(i=1;i<SIZE;i++) {
        for(j=1;j<SIZE;j++) {
            mat[i][j] = i*j;
        }
    }

    for(i=1;i<SIZE;i++) {
        for(j=1;j<SIZE;j++) {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }

    //---------------------------------------------


    return 0;
}
