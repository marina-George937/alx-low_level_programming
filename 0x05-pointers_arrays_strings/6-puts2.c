#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}



/**
 * puts2 - print characters of string
 *
 * @str: string
 */


void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
