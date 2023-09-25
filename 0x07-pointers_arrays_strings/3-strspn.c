#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r++;
				break;
			}
			else
				return (r);
		}
	
	}

	return (r);



}
