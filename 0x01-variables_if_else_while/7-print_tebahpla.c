#include <stdio.h>

/**
 * main - print the alphabets in lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char let;

for (let = 'z'; let >= 'a'; let--)
putchar(let);

putchar('\n');

return (0);
}
