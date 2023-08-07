#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * main - function copied file
 * @argc: the size of the arguments
 * @argv: array
 * Return: 10 on succes
 */
int main(int argc, char *argv[])
{
	char c, *st, *str;
	FILE *file_from;
	int fd_to;
	mode_t m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc < 3)
		exit(98);

	st = argv[1];
	str = argv[2];
	file_from = fopen(st, "r");

	if (file_from == NULL)
		exit(98);

	fd_to = open(str, O_CREAT | O_WRONLY | O_TRUNC, m);
	if (fd_to == -1)
	{
		fclose(file_from);
		exit(98);
	}

	while ((c = fgetc(file_from)) != EOF)
		write(fd_to, &c, 1);

	fclose(file_from);
	close(fd_to);

	return (0);
}
