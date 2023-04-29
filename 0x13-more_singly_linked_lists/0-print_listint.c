#include "lists.h"

/**
 * print_listint - Prints the elements of a list
 * @h: Pointer to a list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
