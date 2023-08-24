#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *s)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char result[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[j] == alphabet[i])
			{
				s[i] = result[j];
				break;
			}
		}
	}

	return (s);
}