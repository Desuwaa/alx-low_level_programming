#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function that adds a new node at the beginning of list_t list.
 * @head: pointer to pointer to list_t list
 * @str: string to copy to the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int r;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (r = 0; str[r] != '\0'; r++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = r;
	new->next = *head;
	*head = new;
	return (*head);
}
