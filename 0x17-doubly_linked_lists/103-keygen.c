#include <stdio.h>
#include <stdlib.h>

/**
  * main - function
  * @argc: array
  * @argv: has the arguments
  * Return: 0 for success
  */

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", argv[1]);
	return (0);
}
