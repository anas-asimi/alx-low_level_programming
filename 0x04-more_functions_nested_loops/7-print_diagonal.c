#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: takes in an integer
 */

void print_diagonal(int n)
{
	int i;

	while (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
