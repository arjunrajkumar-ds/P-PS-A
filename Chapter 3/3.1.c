#include <stdio.h>

/*
1 && -2 * - 3 - 4 < 5 && 6 <= 7 >= 8 != 9 / 10 ! 11

First evaluated is unary operations; !. One at the end ->

1 && -2 * - 3 - 4 < 5 && 6 <= 7 >= 8 != 9 / 1

Next is multiplication; *, / %
1 && 6 - 4 < 5 && 6 <= 7 >= 8 != 9

Next is addition; +, -
1 && 2 < 5 && 6 <= 7 >= 8 != 9

Next comparison; <, >, <=, >=
1 && 1 && 0 != 9

Then equality; ==, !=
1 && 1 && 1

Finally AND then OR
Should evaluate to 1


*/

int
main (int argc, char *argv[]) {
    int value;
    value = 1 && -2 * - 3 - 4 < 5 && 6 <= 7 >= 8 != 9 / 10 >! 11;
    printf("%d", value);
    
    return 0;
}