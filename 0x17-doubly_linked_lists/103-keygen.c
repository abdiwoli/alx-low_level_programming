#include <stdio.h>
#include <stdlib.h>

/**
  * main - function name
  * @argc: size
  * @argv: array
  * Return: 0
  */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		argv[1] = "Congrats!";
		printf("%s\n", argv[1]);
		return (0);
	}
	argv[0] = "Segmentation fault (core dumped)";
	printf("%s\n", argv[0]);
	return (1);
}
