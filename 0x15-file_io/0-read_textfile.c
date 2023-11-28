#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * read_textfile - print file content
 * @filename: f
 * @letters: l
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *b;
	ssize_t c, e;

	b = malloc(sizeof(char) * letters);
	if (filename == NULL)
	{
		free(b);
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		free(b);
		return (0);
	}
	c = fread(b, 1, letters, fp);
	if (c < 0)
	{
		free(b);
		fclose(fp);
		return (0);
	}
	e = write(1, b, c);
	free(b);
	fclose(fp);
	if (e != -1)
		return (e);
	else
		return (0);
}
