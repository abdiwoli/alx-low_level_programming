#include "main.h"
/**
 * recursive_helper - strlen getter
 * @s: the string
 * @n: int number to calculate the lentgh
 * Return: int return n
 */
int recursive_helper(char *s, int n)
{
	if (*s != '\0')
	{
		return (recursive_helper(s + 1, n + 1));
	}
	else
		return (n);
}
/**
 * _strlen_recursion - length of string
 * @s: string param
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	return (recursive_helper(s, i));
}
