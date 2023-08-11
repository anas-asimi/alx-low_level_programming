#include <stdio.h>

/**
 * main - print combinations of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int y;

for (x = 0; x <= 9; x++)
{
for (y = x + 1; y <= 9; y++)
{
putchar(x);
putchar(y);

if (x != 9 && y != 9 )
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
