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

	if (*head == NULL)
		return (0);
	current = *head;
	for (i = 0; i <= idx; i++)
	{
		while (current != NULL)
		{
			if (idx == 0)
			{
				next = malloc(sizeof(listint_t));
				next->next = *head;
				next->n = n;
				*head = next;
			}
			if (i == idx - i)
			{
				next = malloc(sizeof(listint_t));
				replace = current->next;
				next->next = replace;
				next->n = n;
				current->next = next;
				return (next);
			}
			current = current->next;
		}
		return (0);
	}
	return (0);
}
