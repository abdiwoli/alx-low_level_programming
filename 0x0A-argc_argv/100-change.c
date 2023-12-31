#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function chanages cents
 * @argc: the size of the array
 * @argv: array
 *Return: 1
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int coins[5] = {25, 10, 5, 2, 1};
		int amount = atoi(argv[1]);
		int num = 0;
		int i;

		if (amount < 1)
		{
			printf("0\n");
			return (1);
		}
		for (i = 0; i < 5; i++)
		{
			num += amount / coins[i];
			amount %= coins[i];
		}
		printf("%d\n", num);
	}
	else
		printf("Error\n");
	return (0);
}
