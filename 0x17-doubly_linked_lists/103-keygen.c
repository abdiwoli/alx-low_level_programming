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
		printf("Congrats!\n");
		return (0);
	}
	printf("Segmentation fault (core dumped)\n");
	return (1);
}
