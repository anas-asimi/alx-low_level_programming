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
	int j = 0, i = 0;
	int **array;
	int numberOfWords = 0;
	int totalLenght = 0;
	char string[] = "     123    456 789 ";

	/* calcule number of words and caracters */
	while (string[i])
	{
		printf("checking : %c\n", string[i]);
		if (string[i] == ' ')
		{
			i++;
			continue;
		}

		numberOfWords++;
		while (string[i] != ' ' && string[i])
		{
			totalLenght++;
			i++;
		}
	}
	printf("found : %d words\n", numberOfWords);
	printf("lenght : %d\n", totalLenght);

	/* allocate needed memory */
	array = malloc(sizeof(char) * (numberOfWords + totalLenght));
	i = 0;
	while (string[i])
	{
		if (string[i] == ' ')
		{
			i++;
			continue;
		}

		while (string[i] != ' ' && string[i])
		{
			array[j] = string[i];
			j++;
			i++;
		}
	}
}
