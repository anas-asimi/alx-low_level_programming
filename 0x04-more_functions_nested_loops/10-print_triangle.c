#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: takes in an integer for size of triangle
 */

void print_triangle(int size)
{
	int row, column, k;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = 1; column < size - row; column++)
			_putchar(' ');
		for (k = 0; k <= row; k++)
			_putchar('#');
		_putchar('\n');
	}
}
