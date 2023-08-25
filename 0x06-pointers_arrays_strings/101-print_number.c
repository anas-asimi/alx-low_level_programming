#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 * @n: The integer to be printed
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (x > 10)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
