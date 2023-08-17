#include "main.h"

/**
 * print_line - write a function that draws a straight line in the terminal.
 * @n: Integer amount of _
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
