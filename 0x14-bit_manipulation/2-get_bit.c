#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the unsigned long integer to extract the bit from
 * @index: the index of the bit to get (0-based)
 *
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dig, lim = 1;

	dig = (sizeof(unsigned long int) * 8) - 1;
	if (n == 0)
		return (0);

	lim = lim << index;
	if (index > dig)
		return (-1);
	if (lim & n)
		return (1);
	else
		return (0);
}
