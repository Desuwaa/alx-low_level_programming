#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates integers from min to max
 * @min: minimun integer in the array
 * @max: maximum integer in the array
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *j;
	int a, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min;

	j = malloc(sizeof(*j) * (size + 1));

	if (j == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= size; a++, min++)
	{
		j[a] = min;
	}

	return (j);
}
