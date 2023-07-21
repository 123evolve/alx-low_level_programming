<<<<<<< HEAD
i#include <stdio.h>
=======
#include <stdio.h>
>>>>>>> 281fc78f8798aa2d7e5dd2ae619fb6b8600b30b6
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
<<<<<<< HEAD
    if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
    {
        if (month > 2 && day >= 60)
=======
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
>>>>>>> 281fc78f8798aa2d7e5dd2ae619fb6b8600b30b6
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
