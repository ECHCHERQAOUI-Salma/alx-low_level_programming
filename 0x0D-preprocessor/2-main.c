#include "main.h"
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char *p;
	int i;

	p = __FILE__;
	for (i = 0; *(p + i) != '\0'; i++)
		_putchar(*(p + i));
	_putchar('\n');
	return (0);
}
