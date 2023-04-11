#include <unistd.h>
#include "main.h"

/**
 * _putchar - writesthe character c to standard output
 * @c: the character that will be printed out
 *
 * Return: if success 1
 * If error, return -1 and set errno accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
