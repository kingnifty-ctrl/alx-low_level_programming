#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all nat. num 2 98.
 * @n : starting num
 *
 * Return : Prints all num from n to 98.
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{	printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
	}
	else if (n == 98)
		printf("%d", n);
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{	printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
	}
}
