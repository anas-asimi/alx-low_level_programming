#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: is the int that we'll use for argument of the function
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
