#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and array and assigns char c
 * @c: assigned char
 * @size: array size
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	else
	{
		for (j = 0; j < size; j++)
		{
			a[j] = c;
		}
	}

	return (a);
}

