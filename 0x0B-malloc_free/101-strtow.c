#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **array;
	int j = 0, i = 0, x = 0;
	int startOfString, endOfstring;
	int totalstrings = 0;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		totalstrings++;
		while (str[i] != ' ' && str[i])
			i++;
	}
	array = malloc(sizeof(char *) * (totalstrings));
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
		array[j] = malloc(sizeof(char) * (endOfstring - startOfString + 1));
		if (array[j]== NULL)
			return (NULL);
		for (x = 0; x < endOfstring - startOfString; x++)
			array[j][x] = str[startOfString + x];
		array[j][endOfstring - startOfString] = '\0';
		j++;
	}
	return (array);
}
