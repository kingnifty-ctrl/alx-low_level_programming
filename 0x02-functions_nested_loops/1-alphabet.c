#include "main.h"
/**
 * main - Check code
 *
 * Return: Always 0.
*/
void print_alpahabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
