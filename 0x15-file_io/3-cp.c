#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * newfile_write - function helps main
 * @file_from: file
 * @str: the file name
 * Return: 0
 */
int newfile_write(FILE *file_from, char *str)
{
	char buffer[1024];
	ssize_t bytesRead;
	mode_t m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int fd_to, fd_close;

	fd_to = open(str, O_CREAT | O_WRONLY | O_TRUNC, m);
	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't create or write to file %s\n", str);
		fclose(file_from);
		exit(99);
	}
	while ((bytesRead = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
	{
		if (write(fd_to, buffer, bytesRead) != bytesRead)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", str);
			fclose(file_from);
			close(fd_to);
			exit(99);
		}
	}
	fd_close = close(fd_to);
	if (fd_close != 0)
	{
		fprintf(stderr, "Error: Error: Can't close fd %s\n", str);
		exit(100);
	}
	return (0);
}
/**
 * main - function copied file
 * @argc: the size of the arguments
 * @argv: array
 * Return: 10 on succes
 */
int main(int argc, char *argv[])
{
	char *st = argv[1], *str = argv[2];
	FILE *file_from;
	int fd_close;

	dup2(STDOUT_FILENO, STDERR_FILENO);

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = fopen(st, "r");
	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", st);
		exit(98);
	}
	newfile_write(file_from, str);
	fd_close = fclose(file_from);
	if (fd_close != 0)
	{
		fprintf(stderr, "Error: Error: Can't close fd %s\n", st);
		exit(100);
	}
	return (0);
}
