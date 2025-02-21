/*
A program that reads a date in dd/mm/yyyy format and calculates the day number within the year
*/

#include <stdio.h>

#define JAN 31
#define FEB 28
#define FEBL 29
#define MAR 31
#define APR 30
#define MAY 31
#define JUN 30
#define JUL 31
#define AUG 31
#define SEP 30
#define OCT 31
#define NOV 30
#define DEC 31

int
main (int argc, char *argv[]) {
    int day, month, year, daynumber;
    day = month = year = daynumber = 0;

    printf("Enter a date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 1){
        daynumber = day;
    }else if (month == 2) {
        daynumber = day + JAN;
    }else if (month == 3) {
        daynumber = day + JAN + FEB;
    }else if (month == 4) {
        daynumber = day + JAN + FEB + MAR;
    }else if (month == 5) {
        daynumber = day + JAN + FEB + MAR + APR;
    }else if (month == 6) {
        daynumber = day + JAN + FEB + MAR + APR + MAY ;
    }else if (month == 7) {
        daynumber = day + JAN + FEB + MAR + APR + MAY + JUN;
    }else if (month == 8) {
        daynumber = day + JAN + FEB + MAR + APR + MAY + JUN + JUL;
    }else if (month == 9) {
        daynumber = day + JAN + FEB + MAR + APR + MAY + JUN + JUL + AUG;
    }else if (month == 10) {
        daynumber = day + JAN + FEB + MAR + APR + MAY + JUN + JUL + AUG + SEP;
    }else if (month == 11) {
        daynumber = day + JAN + FEB + MAR + APR + MAY + JUN + JUL + AUG + SEP + OCT;
    }else if (month == 12) {
        daynumber = day + JAN + FEB + MAR + APR + MAY + JUN + JUL + AUG + SEP + OCT + NOV;
    }

    if (year % 4 == 0){
        daynumber = daynumber + 1;
    }


    printf("%02d/%02d/%02d is day number %d in the year", day, month, year, daynumber);
    
    return 0;
}