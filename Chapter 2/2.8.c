#include <stdio.h>

/*
Program to convert a reading in Fahrenheit to Celsius
*/

int
main (int argc, char *argv[]) {
    float celsius, fahrenheit, temp;
    celsius = temp = 0;
    printf("Provide Fahrenheit reading to convert to Celsius: ");
    scanf("%f", &fahrenheit);

    temp = fahrenheit - 32;
    celsius = temp * 5.0/9.0;

    printf("Celsius conversion is %.2f", celsius);
    return 0;
    }