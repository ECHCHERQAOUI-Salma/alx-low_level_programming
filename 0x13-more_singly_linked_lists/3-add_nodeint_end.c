#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - add node at end
 * @head: head
 * @n: n
 * Return: pointer to list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *last;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (0);
	end->n = n;
	end->next = NULL;
	last = *head;
	if (*head == NULL)
		*head = end;
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = end;
	}
	return (end);
}
