#include "main.h"

/**
 * print_last_digit- returns last digit
 * @n: num to return last digit
 *
 * Return: returns last digit
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	_putchar((ld % 10) + '0');
	return (ld % 10);
}
