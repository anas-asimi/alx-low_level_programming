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
	int i, j, len1, len2;
	char *result;

	i = j = len1 = len2 = 0;
	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;
	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	/* allocate memory */
	result = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (result == NULL)
		return (NULL);

	/* copy s1 */
	if (s1 != NULL)
		for (i = 0; i < len1; i++)
			result[i] = s1[i];

	/* copy s2 */
	if (s2 != NULL)
		for (j = 0; j <= len2; j++, i++)
			result[i] = s2[j];

	return (result);
}
