/*
3.3 - Finding the roots of an equation of the form ax^2 + bx + c = 0

Roots = -b +/- sqrt(d) / 2a

, where d = b^2 - 4ac

When d=0 -> 1 root
When d<0 -> no real roots

Special cases for a=0, b=0

Test cases:
# TODO


*/

#include <stdio.h>
#include <math.h>

int
main (int argc, char *argv[]) {
    float a, b, c;
    a=0; b=0; c=0;

    float determinant, root;
    determinant=0; root=0;

    printf("Provide an equation that matches the general quadratic formula: ");
    scanf("%fx^2  %fx  %f", &a, &b, &c);

    printf("Read values: a = %.2f, b = %.2f, c = %.2f", a, b, c);

    determinant = (b * b) - 4 * a * c;
    printf("\nDeterminant = %.2f", determinant);

    if (determinant < 0) {
        printf("\nNo real roots exist");
    }
    else if (a==0) {
        root = -c / b;
        printf("-%.2f / %.2f = %.2f", c, b, root);
    } else if ((b==0) && (a==0)) {
        root = -c;
        printf("\nNo x-intercepts, only y-int at %.2f", root);
    } else if (b==0) {
        root = sqrt(-c / a);
        printf("\nRoots are +/-%.2f", root);
    } else {
        root = (-b + sqrt(determinant)) / 2*a;
        printf("\nRoots are +/-%.2f", root);
    }
    return 0;
}