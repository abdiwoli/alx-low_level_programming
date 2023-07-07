#include "main.h"
#include <stdio.h>
/**
 * main - function prints all arguments
 * @argc: int the size of the array
 * @argv: the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
