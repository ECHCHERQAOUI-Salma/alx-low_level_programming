#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete at index
 * @head: h
 * @index: i
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL)
		return (-1);
	current = *head;
	for (i = 0; i <= index + 1 && current != NULL; i++)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(current);
			return (1);
		}
		else if (i == index - 1)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
