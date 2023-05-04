#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to be printed out
 *
 * Return: On success 1.
 * On error, -1 is returned, and appropriately set errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
