#include "main.h"
/**
 * factorial - the factorial of a number
 * @n:int
 * Return:int
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
