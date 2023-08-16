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
	int i, res;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			res = i;
			if (res == 98)
			{	printf("%d", res);
				break;
			}
			printf("%d, ", res);
		}
	}
	else if (n == 98)
		printf("%d", n);
	else
	{
		for (i = n; i >= 98; i--)
		{
			res = i;
			if (i == 98)
			{	printf("%d", res);
				break;
			}
			printf("%d, ", res);
		}
	}
}
