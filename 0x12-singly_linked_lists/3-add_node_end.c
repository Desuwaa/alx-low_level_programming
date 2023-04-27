#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function that adds a new node at the end of list_t list
 * @head: pointer to pointer to list_t list.
 * @str: string to copy to new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int j;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = j;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else if ((*head)->next == NULL)
		(*head)->next = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
