#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - function copyes file
 * @argc: size
 * @argv: array
 * Return: int
 */
int main(int argc, char **argv)
{
	int fd, fd2;
	int byte, bytes, cl, cl2;
	char *filename = argv[1], *filename2 = argv[2];
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	byte = read(fd, buff, sizeof(buff));
	if (byte == -1)
	{
		cl = close(fd);
		if (cl == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	buff[byte] = '\0';
	if (access(filename2, F_OK) == 0)
		fd2 = open(filename2, O_WRONLY | O_TRUNC);
	else
		fd2 = open(filename2, O_CREAT | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
		exit(99);
	}

	bytes = write(fd2, buff, strlen(buff));
	cl2 = close(fd2);
	cl = close(fd);
	if ((cl == -1) | (cl2 == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd == -1 ? fd : fd2);
		exit(100);
	}
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
		exit(99);
	}
	return (0);
}
