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
	char *opr;
	int (*fun)(int, int);

	if (argc == 4)
	{
		opr = argv[2];
		if (*opr != '/' && *opr != '%' && *opr != '-' && *opr != '+' && *opr != '*' && strlen(opr) != 1)
		{
			printf("Error\n");
			exit(98);
		}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (num2 == 0 && *opr == '/')
		{
			printf("Error\n");
			exit(100);
		}
		fun = get_op_func(opr);
		printf("%d\n", fun(num1, num2));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
