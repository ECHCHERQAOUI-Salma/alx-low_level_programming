#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print
 * @h: head
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	int c = 1;
	listint_t *np;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	np = h->next;
	while (np != NULL)
	{
		c++;
		printf("%d\n", np->n);
		np = np->next;
	}
	return (c);
}
