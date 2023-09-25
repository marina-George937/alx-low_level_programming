#include "main.h"

/**
 * _memset: set memory
 *
 * @s: pointer to vhar
 * @b: char
 * @n: int number
 *
 * Return: pointer to char
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}


	return (s);
}
