#include "main.h"

/**
 * _puts - print string
 *
 * @str: string to print
 */




void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	
	}

	putchar('\n');

}
