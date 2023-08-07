#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - function copies file
 * @argc: the size of arguments
 * @argv: the arguments
 * Return: 0 onsucess
 */

int main(int argc, char *argv[])
{
	char c, *str, *st;

	if (argc < 3)
		exit(98);
	st = argv[1];
	str = argv[2];
	FILE *file_from = fopen(st, "r");

	if (file_from == NULL)
		exit(98);
	FILE *file_to = fopen(str, "w");

	if (file_to != NULL)
	{
		fclose(file_from);
		exit(98);
	}
	while ((c = fgetc(file_from)) != EOF)
	{
		fputc(c, file_to);
	}
	fclose(file_from);
	fclose(file_to);

	return (0);
}