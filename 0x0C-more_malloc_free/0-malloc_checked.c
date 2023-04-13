#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
	{
		exit(98);
	}

	return (j);
}
