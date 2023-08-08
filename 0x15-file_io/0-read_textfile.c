#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile -funtion prints file
 * @filename: the file name
 * @letters: number of chars
 * Return: number of printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t let, n;
	char *buffer;
	int fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	let = read(fd, buffer, letters);
	if (let == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n = write(STDOUT_FILENO, buffer, let);
	if (n == -1)
	{
		close(fd);
		return (0);
	}
	return (n);
}
