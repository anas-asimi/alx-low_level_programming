#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints element of array
 * @a: array name
 * @n: elements of the array
 * Return: Always not.
 */

void Print_array(int *a, int n) /* void */
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
