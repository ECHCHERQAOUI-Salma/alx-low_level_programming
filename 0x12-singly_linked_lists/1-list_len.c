#include "lists.h"
/**
 * list_len - list lenght
 * @h: head
 * Return: size
 */
size_t list_len(const list_t *h)
{
	int c = 1;
	list_t *np;

	if (h == NULL)
		return (0);
	np = h->next;
	while (np != NULL)
	{
		c++;
		np = np->next;
	}
	return (c);
}
