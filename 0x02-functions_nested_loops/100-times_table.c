#include <stdio.h>

/**
 * print_times_table - prints the n times table,
 * inorder separated by comma, followed by a space
 * @n: is used as int to pass argument
 */

void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (n >= 0 || n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (z >= 100)
					{
						_putchar(z / 100 + '0');
					}
					else
					{
						_putchar(' ');
					}
					if (z >= 10)
					{
						_putchar(z / 10 + '0');
					}
					else
					{
						_putchar(' ');
					}
				}
				_putchar(z % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
