#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list print_all;
	unsigned int x = 0, y, e = 0;
	char *put;
	const char s_arg[] = "cifs";

	va_start(print_all, format);
	while (format != NULL && format[x] != '\0')
	{
		y = 0;
		while (s_arg[y])
		{
			if (format[x] == s_arg[y] && e)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(print_all, int)), e = 1;
				break;
			case 'i':
				printf("%d", va_arg(print_all, int)), e = 1;
				break;
			case 'f':
				printf("%f", va_arg(print_all, double)), e = 1;
				break;
			case 's':
				put = va_arg(print_all, char*), e = 1;

				printf("%s", put);
				break;
		} x++;
	}
	printf("\n"), va_end(print_all);
}
