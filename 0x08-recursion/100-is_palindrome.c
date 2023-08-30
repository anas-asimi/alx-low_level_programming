#include "main.h"

/**
 * str_length - return the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int str_length(char *s)
{
	if (s[0] != '\0')
		return (1 + str_length(s + 1));
	return (0);
}

/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @left: left index.
 * @rigth: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int left, int rigth)
{
	if (s[left] == s[rigth])
		if (left > rigth / 2)
			return (1);
		else
			return (pal_checker(s, left + 1, rigth - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, str_length(s) - 1));
}
