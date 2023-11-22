#include "lists.h"
/**
 * listint_len - list lenght
 * @h: head
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	int c = 1;
	listint_t *np;

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
