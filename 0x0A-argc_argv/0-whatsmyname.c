#include "main.h"
#include <stdio.h>
/**
 * main - main function that prints program name
 * @argc: int param the size of array
 * @argv: array of arguments
 * Return: the size
 */
int main(int argc, char **argv)
{
	printf("%s\n", *argv);
	return (argc);
}
