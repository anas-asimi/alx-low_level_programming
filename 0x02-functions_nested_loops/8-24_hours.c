#include "main.h"

/**
 * jack_bauer - func that prints every minute of Jack Bauer's day,
 * starting from 00:00 to 23:59, min loop count mins, while hour loop counts
 * hours and resets mins
 * Return: 0
 */

void jack_bauer(void)
{
	int houre;
	int minute;

	for (houre = 0 ; houre < 24; houre++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(houre / 10 + '0');
			_putchar(houre % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
}
