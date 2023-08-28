#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string.
 * @accept: The set of acceptable bytes.
 *
 * Return: A pointer to the first matching byte in s, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}

