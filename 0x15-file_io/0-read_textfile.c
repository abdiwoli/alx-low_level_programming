#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - function read file
 * @filename: the file
 * @letters: size
 * Return: the bye read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char buff[1024];
	ssize_t  bytes;

	if (fd == -1)
	{
		perror(filename);
		return (0);
	}

	bytes = read(fd, buff, letters);

	if (bytes == -1)
	{
		return (0);
		perror("Error reading file");
	}
	bytes = write(STDOUT_FILENO, buff, bytes);
	if (bytes == -1)
	{
		return (0);
		perror("Error reading file");
	}
	return (bytes);
}
