#include "main.h"

/**
 * jack_bauer - func that prints every minute of Jack Bauer's day,
 * starting from 00:00 to 23:59, min loop count mins, while hour loop counts
 * hours and resets mins
 * Return: 0
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar(x * y + '0');
			_putchar(',');
			_putchar(' ');
			if ((x * y) < 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
