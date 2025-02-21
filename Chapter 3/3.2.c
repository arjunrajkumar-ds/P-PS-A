#include <stdio.h>

/*
Tracing statements
*/

int
main(int argc, char *argv[]){
    printf("3.2 - Tracing variable values through iteration: ");
    int i, j, k;
    i = 3; j = 4;
    if (i<j && j<6) {
        i = i + j;
    } else {
        j = i + j;
    }
    printf("\n\na) Should be: i = 7, j = 4\n");
    printf("VALUES: i = %d, j = %d", i, j);

    i = 3; j = 4; k = 7;
    if ((i<j || j<k) && j<i) {
        i = i+1;
        if (i*i > k) {
            k = k+1;
        } else {
            j = j+1;
            if (i*i > k) {
                k = k+2;
            }
        }
    }
    printf("\n\nb) Should be: i = 3, j = 5, k = 9\n");
    printf("VALUES: i = %d, j = %d, k = %d", i, j, k);

    int month, days;
    month = 7;
    if (month == 2) {
        days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }
    printf("\n\nc) Should be month = 7, days = 31\n");
    printf("VALUES: month = %d, days = %d", month, days);

    int x, y;
    x = 1; y = 2;
    if (x>y) {
        x = x+1;
    }
    if (x<y) {
        y = y+2;
    }
    printf("\n\nd) Should be x=1, y=4\n");
    printf("VALUES: x=%d, y=%d\n", x, y);

    x = 1; y = 2;
    if (x>y) {
        x = x+1;
    }
    if (x<y) {
        y = y+2;
    }
    printf("\n\ne) Should be x=1, y=4\n");
    printf("VALUES: x=%d, y=%d\n", x, y);

    x = 0; y = 0;
    if (y<x) {
        printf("y is smaller\n");
    } else if (y==x) {
        printf("x & y are equal\n");
    } else {
        printf("y is greater\n");
    }
    return 0;
}