#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *f = __FILE__;
int i = 0;
while (f[i] != '\0')
{
	_putchar(f[i]);
	i++;
}
