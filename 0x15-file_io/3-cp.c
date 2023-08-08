#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
/**
 * erorm - function prints error
 * @str: the path
 */
void erorm(char *str)
{
	fprintf(stderr, "Error: Can't write %s\n", str);
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
	char *st = argv[1], *str = argv[2], buffer[1024];
	FILE *file_from;
	int fd_to, fd_close;
	ssize_t bytesRead;
	mode_t m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", st);
		exit(98);
	}
	fd_to = open(str, O_CREAT | O_WRONLY | O_TRUNC, m);
	if (fd_to == -1)
		erorm(str);
	while ((bytesRead = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
		if (write(fd_to, buffer, bytesRead) != bytesRead)
			erorm(str);
	fd_close = fclose(file_from);
	if (fd_close != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d", fd_close);
		exit(100);
	}
	fd_close = close(fd_to);
	if (fd_close != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d", fd_close);
		exit(100);
	}
	return (0);
}
