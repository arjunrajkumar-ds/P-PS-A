#include <stdio.h>

#define PI 3.141529

int
main (int argc, char *argv[]) {
    /* 
    Write assignment statements using these declarations
    */

    printf("The area and perimeter of a square & circle will be calculated given a length r:\n");

    double r, sq_area, circle_area, sq_perimeter, circle_perimeter, elapsed_hours;
    int start_hour, start_min, start_sec, 
    finish_hour, finish_min, finish_sec;

    printf("\n\nPlease provide r: ");
    scanf("%lf", &r);
    printf("\nr is: %.2lf", r);

    sq_area = r * r;
    sq_perimeter = r + r + r + r;
    circle_area = 4.0 / 3.0 * PI * r * r * r;
    circle_perimeter = 2.0 * PI * r;

    printf("Square - Area: %.2lf, Perimeter: %.2lf\nCircle - Area: %.2lf, Perimeter: %.2lf", sq_area, sq_perimeter, circle_area, circle_perimeter);

    printf("\n\nPut in two different times (HH:MM:SS) to obtain the difference in time: ");
    printf("\nStart time: ");
    scanf("%d:%d:%d", &start_hour, &start_min, &start_sec);
    printf("\nFinish time: ");
    scanf("%d:%d:%d", &finish_hour, &finish_min, &finish_sec);

    elapsed_hours = finish_hour - start_hour;
    printf("%.0f hours have elapsed", elapsed_hours);

    return 0;
    }