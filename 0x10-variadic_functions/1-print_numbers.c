#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguements
 * Return: nothing, prints number if separator is not NULL
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printed;
	unsigned int a;

	va_start(printed, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(printed, int));

		if (a != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(printed);
	printf("\n");
}
