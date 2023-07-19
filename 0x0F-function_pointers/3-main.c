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
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		opr = argv[2];
		fun = get_op_func(opr);
		printf("%d\n", fun(num1, num2));
	}
	printf("Error");
	exit(98);
	return (0);
}
