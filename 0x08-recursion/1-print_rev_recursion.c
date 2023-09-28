#include "main.h"

/**
 * _print_rev_recursion - prints in reverse recurse
 * @s: string to recurse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		if(*(s - 1))
		{
			_putchar(*(s - 1));
			_print_rev_recursion(s - 1);
		}
		else
			_putchar('\n');
	}


}
