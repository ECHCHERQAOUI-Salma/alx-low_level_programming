#include <stdio.h>
#include "lists.h"
/**
 * print_list - print
 * @h: head
 * Return: size
 */
size_t print_list(const list_t *h)
{
	int c = 1;
	list_t *np;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] nil\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	np = h->next;
	while (np != NULL)
	{
		c++;
		if (np->str == NULL)
			printf("[0] nil\n");
		else
			printf("[%d] %s\n", np->len, np->str);
		np = np->next;
	}
	return (c);
}
