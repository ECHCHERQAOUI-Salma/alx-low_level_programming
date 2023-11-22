#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint - add
 * @head: head
 * @n: node
 * Return: pointer to node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
