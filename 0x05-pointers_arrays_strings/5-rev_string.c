#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string to reverse
 */






void rev_string(char *s)
{
	int i = 0,j=0;
	char c;
	
	while (s[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j++;
		i--;
	}

	s[j] = '\0';

}
