#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c: is the int that will be used for argument of the function
 * Return: 1 if it is lowercase or otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
