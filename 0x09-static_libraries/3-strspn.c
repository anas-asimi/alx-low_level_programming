#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring consisting of bytes from
 * accept.
 * @s: The input string.
 * @accept: The set of accepted bytes.
 *
 * Return: The number of bytes in the initial segment of s that match accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				length++;
				break;
			}
			a++;
		}

		if (*a == '\0')
			break;

		s++;
	}

	return (length);
}
