#include "main.h"

/**
 * factorial - gives factorial of number
 * @n: number to use
 * Return: returns factor or -1
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
