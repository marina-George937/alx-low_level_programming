#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int i = 0;
	int c = 0;
	char *t;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	t = malloc((sizeof(char) * c) + 1);
	while (i <= c)
	{
		t[i] = str[i];
		i++;
	}
	t[i] = '\0';
	if (t == NULL)
		return (NULL);
	return (t);
}
