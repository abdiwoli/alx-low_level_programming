#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>

/**
 * error_message - function name
 * @filename: filename
 */
void error_message(char *filename)
{
	perror(filename);
	exit(98);
}
/**
 * create_new_file - function creates file
 * @filename: file
 * @text_content: content
 * Return: 1 or -1
 */
void create_new_file(const char *filename, char *text_content)
{
	int fd, cl;
	int size;

	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_CREAT | O_WRONLY, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (text_content == NULL)
	{
		close(fd);
		return;
	}
	size = write(fd, text_content, strlen(text_content));
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function copyes file
 * @argc: size
 * @argv: array
 * Return: int
 */
int main(int argc, char **argv)
{
	int fd;
	int byte, cl;
	char *filename = argv[1], *filename2 = argv[2];
	char buff[1024], buffer[10024];

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
	byte = read(fd, buff, 1024);
	while (byte > 0)
	{
		buff[strlen(buff)] = '\0';
		memcpy(buffer + strlen(buffer), buff, byte);
		byte = read(fd, buff, 1024);
		
	}
	if (byte == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	buffer[strlen(buffer)] = '\0';
	create_new_file(filename2, buffer);
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
