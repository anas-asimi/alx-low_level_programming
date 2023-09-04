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
	char *result;
	int len = 0;
	int i, j;
	int x = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	result = malloc(sizeof(char) * len);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			result[x] = av[i][j];
			j++;
			x++;
		}
		result[x] = '\n';
		j++;
		x++;
	}
	return (result);
}
