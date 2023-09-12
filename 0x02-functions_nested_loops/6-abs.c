#include "main.h"

/**
 *
 * _abs - returns the absolute value 
 *
 * @n: the number to get the absolute value to it 
 *
 * Return: 0 or positive number
 *
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
