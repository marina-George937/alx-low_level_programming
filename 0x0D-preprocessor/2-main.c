#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	int i = 0;
	char *f = __FILE__;
	while (f[i] != '\0')
	{
		_putchar(f[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
