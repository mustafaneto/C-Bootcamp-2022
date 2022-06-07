#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int day;
    int month;
    int year;
}Date;

Date inputDate() {
    Date dt;
    printf("Enter day (1-31): ");
    scanf("%d", &dt.day);

    printf("Enter month (1-12): ");
    scanf("%d", &dt.month);

    printf("Enter year (yyyy): ");
    scanf("%d", &dt.year);
    return dt;
}

void printDate(Date dt) {
    printf("Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}

void printNextDate(Date dt) {
    dt.day = dt.day + 1;
    if(dt.day > 31) {
        dt.day = 1;
        dt.month++;
        if (dt.month > 12) {
            dt.month = 1;
            dt.year++;
        }
    }
    printf("Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}

int main() {
    Date graduationDate;
    graduationDate = inputDate();
    printDate(graduationDate);
    printNextDate(graduationDate);
}
