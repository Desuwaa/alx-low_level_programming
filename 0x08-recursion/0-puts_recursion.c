#include "main.h"

/**
 * _puts_recursion - prints string recursively
 * @s: a string of character
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
	    _putchar("\n");
	}
}
