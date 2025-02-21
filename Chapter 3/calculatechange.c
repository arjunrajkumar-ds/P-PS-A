#include <stdio.h>

/*
Program that reads an integer amount of cents between 0 & 99
Prints out the coins necessary to make up that amount of money

Available coins: 50, 20, 10, 5, 2, 1

E.g.
93
> 50, 20, 20, 2, 1

69
> 50, 10, 5, 2, 2
*/

int
main (int argc, char *argv[]) {
    int total, balance, remaining, c50, c20, c10, c5, c2, c1;
    total = balance = remaining = c50 = c20 = c10 = c5 = c2 = c1 = 0;

    printf("Enter amount in cents: ");
    scanf("%d", &total);
    if (total >= 0 && total <= 99) {
        balance = total;
    }
    else {
        printf("Invalid input");
    }
    if (total >= 50) {
        balance = total - 50;
        c50 += 1;
    }
    if (balance >= 20) {
        c20 = balance / 20;
        balance -= (c20 * 20);
    }
    if (balance >= 10) {
        c10 = balance / 10;
        balance = balance - (c10 * 10);
    }
    if (balance >= 5) {
        c5 = balance / 5;
        balance = balance - (c5 * 5);
    }
    if (balance >= 2) {
        c2 = balance / 2;
        balance = balance - (c2 * 2);
    }
    if (balance >= 1) {
        c1 = balance / 1;
        balance = balance - (c1 * 1);
    }
    printf("The coins required to make %d cents are: \n50c: %d, \n20c: %d, \n10c: %d, \n5c: %d, \n2c: %d, \n1c: %d", total, c50, c20, c10, c5, c2, c1);
    return 0;
}