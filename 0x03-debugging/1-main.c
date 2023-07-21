#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

<<<<<<< HEAD
        /*while (i < 10)*/
        /*{*/
	/*      putchar(i);*/
        /*}*/
=======
        while (i < 10)
        {
                putchar(i);
        }
>>>>>>> 281fc78f8798aa2d7e5dd2ae619fb6b8600b30b6

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
