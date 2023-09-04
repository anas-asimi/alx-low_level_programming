#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *result, *str;
	int len = 0;
	int i, j;
	int x = 0;

	/* Validate */
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*get all args length */
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		for (j = 0; str[j]; j++)
			len++;
		len++;
	}
	/* Allocate memory */
	result = malloc((sizeof(char) * len) + 1);
	/* Fill memory */
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		for (j = 0; str[j]; j++)
		{
			result[x] = str[j];
			x++;
		}
		result[x] = '\n';
		x++;
	}
	result[x] = '\0';
	return (result);
}
