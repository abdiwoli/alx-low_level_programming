#include "main.h"
/**
 * main - function prints number of arguments
 * @argc: the size of the array
 * @argv: the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	_putchar(argc - 1 + '0');
	argv++;
	_putchar('\n');
	return (0);
}
