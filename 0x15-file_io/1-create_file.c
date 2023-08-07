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
	int flag = O_RDWR | O_CREAT | O_EXCL;
	mode_t file_mode = S_IRUSR | S_IWUSR;
	int fp = open(filename, flag, file_mode);

	if (fp == -1 || filename == NULL)
		return (-1);
	write(fp, text_content, strlen(text_content));
	close(fp);

	return (1);
}
