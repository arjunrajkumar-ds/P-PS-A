#include <stdio.h>

/*
Program to convert a reading in Fahrenheit to Celsius - Exercise 2.8
Adding functionality to perform reverse

Input scans C or F reading & provides the inverse
*/

int
main (int argc, char *argv[]) {
    char unit;
    float reading, celsius, fahrenheit, temp;
    celsius = fahrenheit = temp = unit = reading = 0;
    printf("Enter a temperature: ");
    scanf("%f%c", &reading, &unit);

    if (unit == 'C'){
        celsius = reading;
        temp = reading * 9.0 / 5.0;
        fahrenheit = temp + 32;
        printf("The temperature %.2fF converts to %.2fC", reading, fahrenheit);
    }
    else if (unit == 'F') {
        fahrenheit = reading;
        temp = reading - 32;
        celsius = temp * 5.0 / 9.0;
        printf("The temperature %.1fC converts to %.1fF", reading, celsius);
    }
    else {
        printf("Invalid input");
    }
    return 0;
    }