#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: pointer to the first character of number 1.
 * @n2: pointer to the second character of number 2.
 * @r: Buffer where to write the result.
 * @n: Buffer size.
 *
 * Return: Pointer to the result of the string
 */

char *infinite_add(char *n1, char *n2, char *r, int n)
{
	int x = 0, y = 0;
	int add = 0;
	int i = n - 2;

	while (n1[x + 1] != 0)
		x++;
	while (n2[y + 1] != 0)
		y++;
	r[n - 1] = 0;

	while (i >= 0 && (x >= 0 || y >= 0))
	{
		add += (x < 0 ? '0' : n1[x]) + (y < 0 ? '0' : n2[y]);
		add -= 2 * '0';
		r[i] = add % 10 + '0';
		add /= 10;
		i--;
		x--;
		y--;
	}

	if ((i < x || i < y) || (i < 0 && add))
		return (0);

	add ? r[i] = add + '0' : 1;
	i += add ? 0 : 1;

	return (r + i);
}
