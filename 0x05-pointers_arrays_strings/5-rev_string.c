#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string to reverse
 */






void rev_string(char *s)
{
	char *sc;
	int i = 0,j=0;

	while (s[i] != '\0')
		i++;
	while (j <= i)
	{
		sc[j] = s[i];
		j++;
		i--;
	}

	*s = *sc;

}
