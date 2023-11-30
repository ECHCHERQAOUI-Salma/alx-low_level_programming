#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * create_file - create
 * @filename: filename
 * @text_content: text
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int n, fd;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
	{
		fp = fopen(filename, "w");
	}
	else
	{
		fd = open(filename, O_RDONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		fp = fdopen(fd, "r");
		if (fp == NULL)
			return (-1);
		if (text_content != NULL)
		{
			n = fprintf(fp, "%s", text_content);
			if (n < 0)
				return (-1);
		}
	}
	fclose(fp);
	return (1);
}
