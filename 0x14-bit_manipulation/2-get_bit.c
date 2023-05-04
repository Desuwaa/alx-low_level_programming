#include "main.h"
#include <stdio.h>
/**
 * get_bit - Returns a particular value at a given index
 * @n: Number whose value to be checked
 * @index: index to look for the number
 * Return: value at a given index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));
}
