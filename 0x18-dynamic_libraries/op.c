#include <stdio.h>

/**
 * add - function adds
 * @a: int
 * @b: int
 * Return: int
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - function sub
 * @a: int
 * @b: int
 * Return: int
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * div - function div
 * @a: int
 * @b: int
 * Return: int
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}
/**
 * mul - function mul
 * @a: int
 * @b: int
 * Return: int
 */

int mul(int a, int b)
{
	return (a * b);
}
/**
 * mod - function mod
 * @a: int
 * @b: int
 * Return: int
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return a % b;
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return 0;
	}
}
