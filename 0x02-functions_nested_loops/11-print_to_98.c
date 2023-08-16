#include "main.h"
/**
 * print_to_98 - prints all natural numbers from input to 98,
 * inorder separated by comma, followed by a space
 * @n: is used as int to pass argument
 */
void print_to_98(int n)
{
	int x;
	int first_digit;
	int second_digit;
	int third_digit;

	while (1)
	{
		x = n >= 0 ? n : -n;
		first_digit = (x / 100) % 10;
		second_digit = (x / 10) % 10;
		third_digit = (x / 1) % 10;
		if (x >= 100)
		{
			if (x < 1000 && n < 0)
				_putchar('-');
			_putchar(first_digit + '0');
		}
		if (x >= 10)
		{
			if (x < 100 && n < 0)
				_putchar('-');
			_putchar(second_digit + '0');
		}
		if (x < 10 && n < 0)
			_putchar('-');
		_putchar(third_digit + '0');
		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
		n = (n < 98) ? (n + 1) : (n - 1);
	}
	_putchar('\n');
}
