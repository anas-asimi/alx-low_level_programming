#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input to 98,
 * inorder separated by comma, followed by a space
 * @n: is used as int to pass argument
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
