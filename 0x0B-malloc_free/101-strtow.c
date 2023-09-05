#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **array;
	int j = 0, i = 0, x = 0, totalstrings = 0, startOfString, endOfstring, length;

	if (str == NULL || str[0] == '\0' || str[0] == '\n' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			i++;
			continue;
		}
		totalstrings++;
		while (str[i] != ' ' && str[i])
			i++;
	}
	array = malloc(sizeof(char *) * (totalstrings + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		startOfString = i;
		while (str[i] != ' ' && str[i])
			i++;
		endOfstring = i;
		length = endOfstring - startOfString;
		array[j] = malloc(sizeof(char) * length + 1);
		for (x = 0; x < length; x++)
			array[j][x] = str[startOfString + x];
		array[j][length] = '\0';
		j++;
	}
	array[totalstrings] = NULL;
	return (array);
}
