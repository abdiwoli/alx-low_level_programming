#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - function creates file
 * @filename: file
 * @text_content: content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int size;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	size = write(fd, text_content, strlen(text_content));
	close(fd);
	if (size == -1)
		return (-1);
	return (1);
}
