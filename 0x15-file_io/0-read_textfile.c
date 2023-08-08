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

	c = fgetc(ptr);
	for (i = 0; (i < letters && c != EOF); i++)
	{
		if (c == EOF)
		{
			fclose(ptr);
			return (i);
		}
		write(1, &c, 1);
		c = fgetc(ptr);
	}
	fclose(ptr);
	return (i);
}
