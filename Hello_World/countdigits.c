#include <stdio.h>
/**
 * Main - Entry point
 * A program that converts a 
 * number to string to find it length
 *
 * Return - Always(0);
 */

int main(void)
{
    int number, count, length;
    char str[10];

    printf("ENTER any number:\n");
    scanf("%d", &number);
    fprintf(str, number);
    length = strlen(number);
    printf("The length of the number is: %d\n", length);

    return 0;
}