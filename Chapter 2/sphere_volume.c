#include <stdio.h>
#include <math.h>

/* 
C doesn't have an inbuilt exponent function like '^^'/'**' in Python
Instead import and use the math.h -> pow function
*/

#define PI M_PI

int
main (int argc, char *argv[]) {
    float radius, volume;
    printf("What is the radius of the sphere (in metres): ");
    scanf("%f", &radius);

    volume = 4.0/3.0 * PI * pow(radius, 3);

    printf("\nA radius of: %.2f \ngives a sphere of volume %3.2f cubic metres", radius, volume);
    return 0;
    }