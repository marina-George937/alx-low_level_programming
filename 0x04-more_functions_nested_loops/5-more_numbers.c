#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 */



void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char j = '0'; j < ('9'+'6'); j++)
			_putchar(j);

		_putchar('\n');
	}


}
