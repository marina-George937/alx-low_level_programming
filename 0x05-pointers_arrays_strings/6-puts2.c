#include "main.h"
/**
 * puts2 - print characters of string
 *
 * @str: string
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
