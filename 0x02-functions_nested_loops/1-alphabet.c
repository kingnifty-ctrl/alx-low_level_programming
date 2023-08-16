#include "main.h"

void print_alpahabet(void);

/**
 * print_alphabet - Prints the alphabets
 */

void print_alphabet(void)
{
	char i;

	for (i = "a"; i <= "z" ; i++)
		_putchar(i);
	_putchar("\n");
}
