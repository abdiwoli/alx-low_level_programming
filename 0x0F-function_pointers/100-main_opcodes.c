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
	unsigned char opcodes[] = {0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x30};

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
		printf("%02hhx", opcodes[i % 8]);
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
