#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add
 * @head: head
 * @str: string
 * Return: pointer to node
 */
list_t *add_node(list_t **head, const char *str)
{
	int c = 0, i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	new->len = c;
	new->next = *head;
	*head = new;
	return (new);
}
