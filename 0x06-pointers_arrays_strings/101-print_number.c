#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 * @n: The integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 1000)
		print_number((n / 1000) % 10);
	if (n > 100)
		print_number((n / 100) % 10);
	if (n > 10)
		print_number((n / 10) % 10);
	_putchar(n % 10 + '0');
}
