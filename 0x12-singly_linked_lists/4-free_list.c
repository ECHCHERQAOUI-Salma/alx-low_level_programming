#include <stdlib.h>
#include "lists.h"
/**
 * free_list - freeeee
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		while (current->str != NULL)
			free(current->str);
		free(current);
		current = next;
	}
}
