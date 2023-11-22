#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node at end
 * @head: head
 * @str: string
 * Return: pointer to list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int c = 0, i;
	list_t *end;
	list_t *last;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (0);
	end->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	end->len = c;
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
