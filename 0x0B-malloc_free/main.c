#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char string[] = "     123fff    45v6 789 ";
	/* ------------ */
	char **array;
	int j = 0, i = 0, x = 0;
	int startOfString, endOfstring;
	int totalstrings = 0;

	/* calcule number of words and caracters */
	while (string[i])
	{
		if (string[i] == ' ')
		{
			i++;
			continue;
		}

		totalstrings++;
		while (string[i] != ' ' && string[i])
		{
			i++;
		}
	}

	/* allocate needed memory */
	array = malloc(sizeof(char *) * (totalstrings));
	i = 0;
	while (string[i])
	{
		if (string[i] == ' ')
		{
			i++;
			continue;
		}
		startOfString = i;
		while (string[i] != ' ' && string[i])
		{
			i++;
		}
		endOfstring = i;
		array[j] = malloc(sizeof(char) * (endOfstring - startOfString + 1));
		for (x = 0; x < endOfstring - startOfString; x++)
		{
			array[j][x] = string[startOfString + x];
		}
		array[j][endOfstring - startOfString] = '\0';
		j++;
	}

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while(array[i][j])
		{
			printf("%c ", array[i][j]);
			printf(" ");
			j++;
		}
		printf("\n");
	}
	return (0);
}

/*
create array of array of 2 int
where the first int is first index of word
and the last int is last index of word

store the array length in int
allocate memory for the array

for every item in array allocate array of char and fill it
*/
