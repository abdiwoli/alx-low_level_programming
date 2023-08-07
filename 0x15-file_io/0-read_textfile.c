#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * read_textfile -funtion prints file
 * @filename: the file name
 * @letters: number of chars
 * Return: number of printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i = 0;
	char c;
	FILE *ptr = fopen(filename, "r");

	if (ptr == NULL || filename == NULL)
		return (0);

	for (i = 0; i < letters; i++)
	{
		c = fgetc(ptr);
		if (c == EOF)
			return (i);
		write(1, &c, 1);
	}
	fclose(ptr);
	return (i);
}
