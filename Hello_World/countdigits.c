#include <stdio.h>
#include <string.h>
/**
 * Main - Entry point
 * A program that converts a 
 * number to string to find it length
 *
 * Return - Always(0);
 */

int main(void)
{
    int number, count = 0, length, div;
    char str[10];

    printf("ENTER any number:\n");
    scanf("%d", &number);
//print length using string converter
    sprintf(str, "%d", number);
    length = strlen(str);
    printf("The length of the number is: %d\n", length);
    
//print length using while loop
    while(number != 0)
   {
    number /= 10;
     count++;
    }
    printf("The number of digits in %d is: %d\n", number, count);
           return 0;
}