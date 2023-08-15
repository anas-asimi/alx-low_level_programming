#include "main.h"

/**
 * print_sign - function to check for a sign of a number
 * @n: is the int that we'll use for the argument of the function
 * Return: 0
 */

int print_sign(int n);
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
