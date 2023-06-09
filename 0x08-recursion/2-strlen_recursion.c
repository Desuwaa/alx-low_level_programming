#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: measured string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length += _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
