#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//----------------------------------------------
bool areTheSame(num1, num2) {
    if (num1 == num2) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n1,n2;
    printf("Please enter two numbers!\n");
    scanf("%d%d",&n1,&n2);
    if (areTheSame(n1,n2) == true) {
        printf("They are the same!");
    } else
        printf("They are different!");
}

//-----------------------------------------------

void doubleTriple( int n1) {

    if (((n1 % 100) > 0) && ((n1 % 10) > 0) && (n1%100 != n1) && (n1%1000 == n1)) {
        printf("triple-digit");
    } else if ( (n1 % 10 > 0) && (n1 % 1 == 0) && (n1%10 != n1) && (n1%1000 == n1))  {
        printf("double-digit");
    } else
        printf("neither double/triple");
}

//----------------------------------------------------

void absoluteNumber(int n1) {

    if (n1 > 0) {
        printf("%d",n1);
    } else
        printf("%d",n1*-1);
}

//-------------------------------------------------

void whichQuadrant(int n1, int n2) {
    if (n1 > 0 && n2 > 0) {
        printf("The point (%d,%d) is at Quadrant 1", n1,n2);
    } else if (n1 < 0 && n2 > 0) {
        printf("The point (%d,%d) is at Quadrant 2", n1,n2);
    } else if (n1 < 0 && n2 < 0) {
        printf("The point (%d,%d) is at Quadrant 3", n1,n2);
    } else if ( n1 > 0 && n2 < 0) {
        printf("The point (%d,%d) is at Quadrant 4", n1,n2);
    } else {
        printf("The point (%d,%d) is at Origin (0,0)", n1,n2);
    }

}

int main() {
    int numberx,numbery;
    printf("Enter a coordinate point, please: \n");
    printf("X ->");
    scanf("%d", &numberx);
    printf("y ->");
    scanf("%d", &numbery);

    whichQuadrant(numberx,numbery);
}

//-------------------------------------------------------

void nameMonth(int n1) {
    switch (n1) {
case 1:
    printf("January");
    break;
case 2:
    printf("February");
    break;
case 3:
    printf("March");
    break;
case 4:
    printf("April");
    break;
case 5:
    printf("May");
    break;
case 6:
    printf("June");
    break;
case 7:
    printf("July");
    break;
case 8:
    printf("August");
    break;
case 9:
    printf("September");
    break;
case 10:
    printf("October");
    break;
case 11:
    printf("November");
    break;
case 12:
    printf("December");
    break;
    }
}

int main(){
    int n2;
    printf("Please enter a number and I will return the Month: ");
    scanf("%d", &n2);
    nameMonth(n2);
}

//--------------------------------------------------

void hoursSeconds(int seconds) {
    int hours = seconds / 3600 ;
    int minutes = ((seconds / 3600.00) - hours) * 60;
    int secondsRemaining = (((seconds / 3600.00) - hours) * 60 - minutes) * 60;

    if (minutes > 60) {
        minutes = minutes - 60;
        hours += 1;
    } else if (secondsRemaining > 60) {
        secondsRemaining = secondsRemaining - 60;
        minutes += 1;
    }

    printf("%.2d:%.2d:%.2d", hours, minutes, secondsRemaining);
}

int main() {
    int n1;
    printf("Please, enter a number: \n");
    scanf("%d", &n1);
    hoursSeconds(n1);
}

//--------------------------------------------------

void isDivisible(int n1, int n2, int n3) {
    if (n1 % n2 == 0 && n3 % n2 == 0) {
        printf("Divisible!");
    } else if (n2 % n1 == 0 && n3 % n1 == 0) {
        printf("Divisible!");
    } else if (n1 % n3 == 0 && n2 % n3 == 0) {
        printf("Divisible!");
    } else {
        printf("Non-Divisible");
    }
}

int main() {
    int a, b, c;
    printf("Please enter three numbers to see if they're divisible each other!\n");
    scanf("%d%d%d",&a,&b,&c);
    isDivisible(a,b,c);
}

//---------------------------------------------------

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
       // printf("Leap year!");
        return true;
    } else
       // printf("Not a leap year!");
        return false;
}

int main() {
    int d, m, y;
    printf("Please enter a date dd/mm/yyyy to find the next day.\n");
    printf("First the day: \n");
    scanf("%d", &d);
    printf("Second the month: \n");
    scanf("%d", &m);
    printf("Finally the year: \n");
    scanf("%d", &y);

    if (isLeapYear(y)) {
        if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
            if(d == 31) {
                d = 1;
                m += 1;
            } else if (d < 31 && d > 0) {
                d += 1;
            }
        } else if (m == 12) {
            if (d == 31) {
                d = 1;
                m = 1;
                y += 1;
            } else if(d < 30 && d > 0) {
                d += 1;
            }
        } else if( m == 4 || m == 6 || m == 9 || m == 11) {
            if(d == 30) {
                d = 1;
                m += 1;
            } else if (d < 30 && d > 0) {
                d += 1;
            }
        } else if (m == 2) {
            if (d == 29) {
                d = 1;
                m += 1;
            } else if(d < 29 && d > 0) {
                d += 1;
            }
        }
    } else {
        if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
            if(d == 31) {
                d = 1;
                m += 1;
            } else if (d < 31 && d > 0) {
                d += 1;
            }
        } else if (m == 12) {
            if (d == 31) {
                d = 1;
                m = 1;
                y += 1;
            } else if(d < 30 && d > 0) {
                d += 1;
            }
        } else if( m == 4 || m == 6 || m == 9 || m == 11) {
            if(d == 30) {
                d = 1;
                m += 1;
            } else if (d < 30 && d > 0) {
                d += 1;
            }
        } else if (m == 2) {
            if (d == 28) {
                d = 1;
                m += 1;
            } else if(d < 28 && d > 0) {
                d += 1;
            }
        }
    }

printf("%.2d/%.2d/%d", d,m,y);
}


