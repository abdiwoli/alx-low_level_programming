#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints all arguments
 * @argc: int the size of the array
 * @argv: the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *endptr, *endptr1;

	if (argc >= 3)
	{
		int num = strtol(argv[1], &endptr, 10);
		int num1 = strtol(argv[2], &endptr1, 10);

		if (num)
			printf("%d\n", num * num1);
	}
	else
		printf("Error\n");
	return (0);
}
