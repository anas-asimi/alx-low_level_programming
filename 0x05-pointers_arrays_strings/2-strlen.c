#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the function of a string.
 * @s: value to evaluate
 * Return: Always void.
 */

int _strlen(char *s)
{
	int length = 0;

	while (1)
	{
		if (*(s + length) == '\0')
			break;
		length++;
	}
	return (length);
}
