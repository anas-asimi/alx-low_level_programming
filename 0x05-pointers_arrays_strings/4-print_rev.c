#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	while (i >= 0)
		_putchar(s[i]);
	_putchar('\n');
}
