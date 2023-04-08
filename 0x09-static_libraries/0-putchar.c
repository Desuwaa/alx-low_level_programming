#include <unistd.h>

/**
 * _putchar - inputs c character to stdout
 * @c: The character to print
 *
 * Return: returns 1 if success
 * for error, -1 will be returned, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
