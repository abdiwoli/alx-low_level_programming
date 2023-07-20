#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: the size
 * @argv: array
 * Return: int
 */
int main(int argc, char **argv)
{
	int n, i;
	if (argv == NULL || argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	printf("\n");

	return (0);
}
