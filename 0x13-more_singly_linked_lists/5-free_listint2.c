#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - freeeee
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (*head != NULL)
		current = *head;
	else
		exit (99);
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
