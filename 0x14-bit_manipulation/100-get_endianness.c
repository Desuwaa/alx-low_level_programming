#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *p = (char *) &j;

	if (p[0] == 1) /*"Little Endian*/
	{
		return (1);
	}
	else /*Big Endian*/
		return (0);
}
