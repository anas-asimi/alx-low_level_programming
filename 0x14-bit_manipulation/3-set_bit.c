#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the unsigned long integer to modify
 * @index: the index of the bit to set (0-based)
 *
 * Return: 1 if it worked, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int limit, dig;

	limit = (sizeof(unsigned long int) * 8) - 1;

	if (index > limit)
		return (-1);
	dig = 1 << index;
	*n = *n | dig;
	return (1);
}
