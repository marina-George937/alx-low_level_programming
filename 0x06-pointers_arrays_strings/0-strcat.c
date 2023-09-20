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
	int i = 0, len = 0, j = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	int i = len;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (*dest);

}
