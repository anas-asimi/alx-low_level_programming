#include "main.h"
#include <stdio.h>

/**
 * prime - function to evaluate a number is prime.
 * @i: numbers before n to divide.
 * @num: number to evaluate.
 *
 * Return: give 1 for a prime number, 0 for not a prime.
 */
int prime(int i, int num)
{
	if (i < num && num % i == 0)
		return (0);
	if (num == i)
		return (1);
	else
		return (prime(i + 1, num));
}

/**
 * is_prime_number - function that said is a prime number.
 * @n: number to evaluate.
 *
 * Return: 0 is not prime, 1 is prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(2, n));
}
