#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum
 * @head: h
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int s = 0;

	if (head == NULL)
		return (0);
	for (current = head; current != NULL; current = current->next)
		s += current->n;
	return (s);
}
