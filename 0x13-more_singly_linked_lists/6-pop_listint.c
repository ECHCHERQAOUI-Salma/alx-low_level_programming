#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pop
 * @head: head
 * Return: head
 */
int pop_listint(listint_t **head)
{
	listint_t *replace;
	int r;

	if (*head == NULL)
		return (0);
	replace = *head;
	r = (*head)->n;
	*head = (*head)->next;
	free(replace);
	return (r);
}
