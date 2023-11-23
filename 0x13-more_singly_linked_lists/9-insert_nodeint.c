#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert at index
 * @head: h
 * @idx: index
 * @n: int
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *next, *replace;
	unsigned int i;

	if (*head == NULL || n < 0)
		return (0);
	current = *head;
	for (i = 0; i <= idx; i++)
	{
		while (current != NULL)
		{
			next = malloc(sizeof(listint_t));
			if (next == NULL)
				return (0);
			next->n = n;
			if (idx == 0)
			{
				next->next = *head;
				*head = next;
				return (*head);
			}
			else if (i == idx - i)
			{
				replace = current->next;
				next->next = replace;
				current->next = next;
				return (next);
			}
			current = current->next;
		}
		return (0);
	}
	return (0);
}
