#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of arguements
 * Return: nothing, prints number if separator is not NULL
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printed;
	unsigned int a;
	char *str;

	va_start(printed, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(printed, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (a != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(printed);
	printf("\n");
}
