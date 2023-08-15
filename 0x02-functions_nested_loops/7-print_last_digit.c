#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int n will be used in the argument of a function
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
