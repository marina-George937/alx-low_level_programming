#include "main.h"

/**
 * print_rev - print str in rev order
 *
 * @s: strint to rev
 */



void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (int j = i; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');

}
