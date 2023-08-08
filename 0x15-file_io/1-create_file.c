#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - function create file
 * @filename: the file to create
 * @text_content: the text file to contain
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int flag = O_RDWR | O_CREAT | O_TRUNC;
	int fp;
	mode_t file_mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fp = open(filename, flag, file_mode);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fp, text_content, strlen(text_content));
	close(fp);

	return (1);
}
