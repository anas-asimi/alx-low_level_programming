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
	int isPositive;

	do
	{
		isPositive = n >= 0;
		if (isPositive)
		{
			x = n;
		}
		else
		{
			x = -n;
		}

		first_digit = (x / 100) % 10;
		second_digit = (x / 10) % 10;
		third_digit = (x / 1) % 10;

		if (x >= 100)
		{
			if (!isPositive)
			{
				_putchar('-');
			}
			_putchar(first_digit + '0');
		}
		else
		{
			_putchar(' ');
		}

		if (x >= 10)
		{
			if (!isPositive)
			{
				_putchar('-');
			}
			_putchar(second_digit + '0');
		}
		else
		{
			_putchar(' ');
		}

		if (x < 10 && !isPositive)
		{
			_putchar('-');
		}

		_putchar(third_digit + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
			if (n < 98)
			{
				n++;
			}
			else if (n > 98)
			{
				n--;
			}
		}
	} while (n != 98);
	_putchar('\n');
}
