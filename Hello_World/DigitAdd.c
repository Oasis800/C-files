#include <stdio.h>
/**
 * main - Entry point
 * A program that prints  adds 
 * the digits of a number 
 * Return - Always(0);
 */

int main()
{
    int num[10], sum = 0, count;
    printf("How many numbers are you going to deal with?\n");
    scanf("%d", &count);
    printf("Enter numbers one by one:\n");
    for(int i = 0; i < count; i++)
    scanf("%d", &num[i]);

    for(int i = 0; i < count; i++)
     sum += num[i] ;

    printf("First value for sum: %d\n", sum);

    return 0;
}
