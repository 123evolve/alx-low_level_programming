#include "main.h"

/**
 * print_rev - This function prints a recerse string
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putschar(s[index]);
	}
	_putchar('\n');
}
