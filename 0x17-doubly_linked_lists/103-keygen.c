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
		printf("%s", argv[1]);
	}
	return (0);
}
