#include "main.h"
#include <ctype.h>

/**
 * _isalpha- checks for alphabets
 * @c: the char to be checked
 *
 * Return: returns 1 for success and 0 otherwise
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
