#include <stdio.h>
/**
 * Main - Entry point
 * A program that prints a str 3
 * times and prints the first 9 
 * letter after a newline 
 *
 * Return - Always (0);
 */
int main()
{

    char str[] = "Holberton School";
    printf("%s%s%s\n%.9s\n", str, str, str,str);

    return 0;
}