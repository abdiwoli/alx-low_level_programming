#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: the size
 * @argv: the arguments array
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *p;
	int (*fun)(int, int);

	if (argc == 4)
	{
		opr = argv[2];
		if (*p != '/' && *p != '%' && *p != '-' && *p != '+' && *p != '*')
		{
			printf("Error\n");
			exit(99);
		}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (num2 == 0 && *p == '/')
		{
			printf("Error\n");
			exit(100);
		}
		fun = get_op_func(p);
		printf("%d\n", fun(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(98);
	return (1);
}
