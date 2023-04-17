#include <unistd.h>

/**
 * _putchar - writes c character to stdout
 * @c: the character that will be printed
 *
 * Return: if success return 1
 * if error, return -1 and set errno accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
