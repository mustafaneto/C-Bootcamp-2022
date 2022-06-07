#include <stdio.h>
#include <stdlib.h>


typedef struct point {
    int x;
    int y;
}Point;

int main() {
    //Creating a "Static Array pf Points"
    Point pointsArray[5];
    int i;

    //Interating over all of the Point Array (and reading input into each of them)
    for (i = 0; i < 5; i++) {
        printf("Enter the %d value of X: \n", i+1);
        scanf("%d", &pointsArray[i].x);
        printf("Enter the %d value of Y: \n", i+1);
        scanf("%d", &pointsArray[i].y);
    };

    //Accessing and printing all the values of each of the "Static Array of Points"
    for (i = 0; i < 5; i++) {
        printf("The %d (X,Y) value is (%d,%d)\n",i+1, pointsArray[i].x, pointsArray[i].y);
    }

    return 0;
}
