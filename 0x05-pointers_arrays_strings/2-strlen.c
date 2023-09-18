#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: string to check
 */




int _strlen(char *s)
{	
	int i = 0;

	while (s[i] != '\0' )
		i++;

	return (i);

}
