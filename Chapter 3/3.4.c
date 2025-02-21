#include <stdio.h>

/*
Write a program that reads a date in dd/mm/yyyy format and
returns the date it will be tomorrow

Special cases arise when:
- Day ticks over the month, depending on #of days

31 days in 
Jan, Mar, May, Jul, Aug, Oct, Dec 
*/

int
main (int argc, char *argv[]) {
    printf("Enter date in format dd/mm/yyyy: ");
    
    int day, month, year;
    day=0; month=0; year=0;
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Date read: %02d/%02d/%02d", day, month, year);

    if (day==31 && (month==1 || month==3 || month==5 || month==7 || month==8
    || month==10 || month==12)) {
        printf("31st in a month with 31 days");
        day = 1;
        if (month == 12){
            day = 1;
            month = 1;
            year = year + 1;
        } else {
            month = month+1;
            year = year + 1;
        }
        printf("Tomorrow: %02d/%02d/%02d", day, month, year);
    }
    else if (day==30 && (month==4 || month==6 || month==9 || month==11)) {
        printf("30th in a month with 30 days");
        day = 1;
        if (month==12){
            month = 1;
        } else {
            month = month+1;
        }
    }
    else if (month == 2){
        if (year % 4 == 0 && day == 28) {
            day = day + 1;
        } else {
        month = month + 1;
        day = 1;
        }
    }
    else {
        day = day+1;
    }

    printf("\nTomorrow:  %02d/%02d/%02d", day, month, year);

    return 0;
}