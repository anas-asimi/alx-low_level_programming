#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The input string.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of c in s, or Null if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
