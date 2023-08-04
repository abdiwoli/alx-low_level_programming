#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - function checks if string is digit
 * @s: the string
 * Return: return 0 or 1
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - function prints all arguments
 * @argc: int the size of the array
 * @argv: the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc >= 3)
	{
		int sum  = 0;
		int i;
		char *endptr;
		int num;

		for (i = 1; i < argc; i++)
		{
			if (!is_digit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			num = strtol(argv[i], &endptr, 10);
			if (num)
				sum += num;
		}
		printf("%d\n", sum);
	}
	else if (argc < 2)
		printf("0\n");
	else
		printf("%s\n", argv[1]);
	return (0);
}
