#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - function checks if string is digit
 * @s: the string
 * Return: return 0 or 1
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * main - function multiplies two num
 * @argc: the size of array
 * @argv: the array
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	unsigned long num1;
	unsigned long num2;

	if (argc < 3)
		exit(98);
	num1 = is_digit(argv[1]) ? atoi(argv[1]) : 1;
	num2 = is_digit(argv[2]) ? atoi(argv[2]) : 1;

	printf("%lu\n", num1 * num2);
	return (0);
}
