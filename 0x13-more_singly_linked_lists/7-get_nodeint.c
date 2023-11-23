#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - indx return
 * @head: head
 * @index: i
 * Return: pointer to list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int c;

	if (head == NULL)
		return (0);
	current = head;
	for (c = 0; c <= index; c++)
	{
		if (c == index)
			return (current);
		if (current != NULL)
			current = current->next;
		else
			return (0);
	}
	return (0);
}
