#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - integrates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	int dot = 0;
	char *j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		dot = dot + 1;
	}

	j = malloc(sizeof(*j) * (dot + n + 1));
	if (j == NULL)
	{
		return (NULL);
	}
	for (b = 0; s1[b] != '\0'; b++)
	{
		j[b] = s1[b];
	}
	for (c = 0; s2[c] != '\0'; && c < n; e++, b++)
	{
		j[b] = s2[c];
	}
	j[b] = '\0';
	return (j);
}
