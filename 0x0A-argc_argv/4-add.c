#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;
	unsigned int j = 0;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; j < strlen(arg); j++)
		{
			printf("we r in : %d\n", arg[j]);
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);

	return (0);
}
