#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two positive numbers
 * @argc: the size
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	unsigned long num1;
	unsigned long num2;

	if (argc < 3)
		exit(98);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%lu\n", num1 * num2);
	return (0);
}
