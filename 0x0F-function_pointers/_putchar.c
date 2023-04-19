#include <unistd.h>

/**
 * _putchar - writes teh character c to stdout
 * @c: character to be printed
 *
 * Return: on success return 1
 * on error, return -1 and errno is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
