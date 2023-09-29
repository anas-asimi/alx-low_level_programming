#include "main.h"

/**
 * binary_to_uint - convert a binary string to an unsigned integer.
 * @b: A pointer to a string
 *
 * Return: The converted unsigned integer, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i;

	if (!b)
		return (0);

	for (i = 0; *(b + i); i++)
	{
		n = n << 1;
		if (*(b + i) == '1')
			n = n | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (n);
}
