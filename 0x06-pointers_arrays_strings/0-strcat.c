#include "main.h"

/**
 * _strcat - string concatenate
 *
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: pointer to char
 */


char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
