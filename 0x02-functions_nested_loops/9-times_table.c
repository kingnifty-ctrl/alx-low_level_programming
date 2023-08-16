#include "main.h"

/**
 * times_table - print 9 times
*/

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (i == 9 && j == 9)
			{
				_putchar(n + '0');
				_putchar('\n');
			}
		}	_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			 _putchar(' ');
	}
}
