#include <stdio.h>

/*
Under which conditions each of the following integer-valued expressions is 1 (true)
5<x -> x < 5
5<x && x<=10

*/

int
main (int argc, char *argv[]) {
    int var;
    var = 5<5;
    printf("%d", var);
    return 0;
}