#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: is the int that will be used for argument of the function
 * Return: 1 if it is alphabetic or otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
