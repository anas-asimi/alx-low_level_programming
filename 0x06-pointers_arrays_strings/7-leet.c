#include "main.h"

/**
 * leet - Encodes a string into "1337" based on specified replacements.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			}
		}
	}

	return (s);
}