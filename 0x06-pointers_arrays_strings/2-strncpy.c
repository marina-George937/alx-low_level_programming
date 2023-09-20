#include "main.h"

/**
 * _strncpy - string copy
 *
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: pointer to char
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
