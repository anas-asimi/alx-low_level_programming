#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The input string.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if not
 * found.
 */
char *strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
