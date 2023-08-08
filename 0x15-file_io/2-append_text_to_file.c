#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * append_text_to_file - function appends text
 * @filename: the file name
 * @text_content: content to append
 * Return: 1 on succes
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptr;

	if (filename == NULL)
		return (-1);
	ptr = fopen(filename, "a");

	if (ptr == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	fprintf(ptr, "%s", text_content);
	fclose(ptr);
	return (1);
}
