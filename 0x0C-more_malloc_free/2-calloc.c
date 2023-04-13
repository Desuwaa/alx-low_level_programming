#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: bytes size
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	j = malloc(nmemb * size);

	if (j == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < nmemb * size; a++)
	{
		j[a] = 0;
	}

	return (j);
}
