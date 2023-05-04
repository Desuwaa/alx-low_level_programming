#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - Sets value of a bit to 1 at a given index.
 * @n: Pointer to a number;
 * @index: index to be replaced
 * Return: 1 if it works, or -1 if there's an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux;

	if (index > sizeof(unsigned int) * 16)
		return (-1);
	aux = 1;
	aux = aux << index;
	*n = ((*n) | aux);
	return (1);
}
