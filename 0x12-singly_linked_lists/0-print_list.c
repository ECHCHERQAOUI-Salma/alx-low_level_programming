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

	if (h->str == NULL)
		printf("[0] nil\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	if (h->next == NULL)
		return(c);
	c++;
	if (h->next->str == NULL)
		printf("[0] nil\n");
	else
		printf("[%d] %s\n", h->next->len, h->next->str);
	return (c);
}
