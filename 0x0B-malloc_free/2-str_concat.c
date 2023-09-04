#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *result;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	result = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i <= len1 + len2; i++){
		if (i < len1)
			result[i] = s1[i];
		else
			result[i] = s2[i - len1];
	}
	return (result);
}
