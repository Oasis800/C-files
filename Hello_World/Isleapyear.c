#include <stdio.h>
/**
 *
 *
 *
 */
 int main(void)
 {
    int year, i;
    printf("Enter a year:\n");
    scanf("%d", &year);
    if (year % 2 == 0)
    {
    printf("Last 10 leap years = \n");
    for(i = 0; i < 10; i++) 
      {
        year = year - 2;
        printf("\t\t      %d\n", year);

      } 
    
    }
    else
    {
        printf("Last 10 calender years:\n");
        for(i = 0; i < 10; i++) 
        {
        year -= 2;
        printf("\t\t      %d\n", year);

        }

    }


    return 0;
 }