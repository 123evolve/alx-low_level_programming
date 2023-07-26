#include "main.h"

/**
 * print_rev - This function prints a reverse string
 * @s: This is the input string
 * return: 0 (success)
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
