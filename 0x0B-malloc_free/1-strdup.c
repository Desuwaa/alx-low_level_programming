#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *  @str: char string to be copied
 *
 *  Return: Always 0
 */
char *_strdup(char *str)
{
	char *a;
	int d, e;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (d = 0; str[d] != '\0'; d++)
	{
		j = j + 1;
	}

	a = malloc(sizeof(char) * j + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (e = 0; str[e] != '\0'; e++)
	{
		a[e] = str[e];
	}

	a[e] = '\0';

	return (a);
}
