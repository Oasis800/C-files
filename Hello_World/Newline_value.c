#include <stdio.h>
/**
 *
 *
 *
 */
 int main(void)
 {
    char newline = '\n';
    char dot = '.';
    char question = '?';
    int one = 1;

    printf("%d\n", newline);
    printf("%d\n", dot);
    printf("%d\n", question);
    printf("%c\n", one);

    for(int i = 0; i <= 128; i++)
    printf("%d = %c\n", i, i);


    return 0;
 }