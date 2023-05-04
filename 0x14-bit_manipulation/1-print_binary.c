#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_binary - prints binary representation of a number
 * @n: number to be represented
 * Return: returns nothing
 **/
void print_binary(unsigned long int n)
{
	char e;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	e = (n & 1) ? '1' : '0';
	_putchar(e);
}
