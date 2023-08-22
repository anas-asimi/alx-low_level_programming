#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @a: variable 1.
 * @b: variable 2.
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

