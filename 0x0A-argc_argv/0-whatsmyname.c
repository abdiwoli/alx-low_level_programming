#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints string
 * @s: string paramater
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		write(1, &(*s), 1);
		s++;
		_puts_recursion(s);
	}
	else
	{
		char c = '\n';

		write(1, &c, 1);
	}
}
/**
 * main - main function that prints program name
 * @argc: int param the size of array
 * @argv: array of arguments
 * Return: the size
 */
int main(int argc, char **argv)
{
	_puts_recursion(*argv);
	return (argc);
}
