#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
/**
 * erorf - function prints error
 * @str: the path
 */
void erorf(char *str)
{
	fprintf(stderr, "Error: can't read from file %s\n", str);
	exit(98);
}
/**
 * erorm - function prints error
 * @str: the path
 */
void erorm(char *str)
{
	fprintf(stderr, "Error: Can't write to %s\n", str);
	exit(99);
}
/**
 * main - function copied file
 * @argc: the size of the arguments
 * @argv: array
 * Return: 10 on succes
 */
int main(int argc, char *argv[])
{
	char *source = argv[1], *dest = argv[2], buffer[1024];
	ssize_t let, n;
	int fd = open(source, O_RDONLY), fd_from, fd_close;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (fd == -1)
		erorf(source);
	let = read(fd, buffer, sizeof(buffer));
	if (let == -1)
		erorf(source);

	n = write(STDOUT_FILENO, buffer, let);
	if (n == -1)
		erorf(source);
	fd_from = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_from == -1)
		erorm(dest);
	n =  write(fd_from, buffer, let);
	if (n == -1)
		erorm(dest);
	fd_close = close(fd_from);
	if (fd_close != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d", fd_close);
		exit(100);
	}
	fd_close = close(fd);
	if (fd_close != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d", fd_close);
		exit(100);
	}
	return (0);
}
