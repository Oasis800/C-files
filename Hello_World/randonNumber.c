#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry point
 * A program that generates a 
 * random number from a range
 *
 * Return - Always(0);
 */
 int main()
 {
    int randomNumber;

    srand(time(0));
    randomNumber = rand() % 7;
    printf("Random Number: %d\n", randomNumber);


    return 0;
 }
