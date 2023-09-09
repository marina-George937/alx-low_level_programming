#include <stdio.h>
/**
 * main - entry point
 *
 *
 * 
 * return : always return 0
 *
 */ 

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return 0;
}
