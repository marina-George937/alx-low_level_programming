#include "main.h"
/**
 *
 * isalpha - checks is c is a letter
 *
 *@c: input to check
 *
 * Return: 0 or 1
 *
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c >= 'Z'))
		return (1);
	else
		return (0);
}

