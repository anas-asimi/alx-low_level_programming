#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
