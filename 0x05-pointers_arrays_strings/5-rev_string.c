#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses the characters in a string.
 * @s: The input string to be reversed
 */

void rev_string(char *s)
{

	int i,length;
	char *s_copy;

	i = 0;
	while (*(s + i) != '\0')
	{
		*(s_copy + i) = *(s + i);
		i++;
	}
	length = i;
	while (i > 0)
	{
		i--;
		*(s + i) = *(s_copy + (length - i));
	}
}
