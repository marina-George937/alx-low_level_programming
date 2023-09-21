#include "main.h"

/**
 * _strncpy - string copy
 *
 * @dest: pointer to string
 * @src: pointer to string
 * @n: int n
 * Return: pointer to char
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
        {
                dest[i] = '\0';
        }

	return (dest);

}

