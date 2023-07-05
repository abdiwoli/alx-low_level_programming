#include "main.h"
/**
 * helper - helps to make recursive
 * @n: the number
 * @i: int
 * @j: int to gaus the roor
 * Return: j or -1
 */
int helper(int n, int i, int j)
{
	if (j != i)
	{
		i = j;
		j = (n / i + i) / 2;
		return (helper(n, i, j));
	}
	else if (j % 2 == 0 && n % 2 == 1)
		return (-1);
	else
		return (j);
}
/**
 * _sqrt_recursion - gets sqtr
 * @n: the int number to get theroot
 * Return: int root
 */

int _sqrt_recursion(int n)
{
	int j = n / 2;
	int i = 0;

	if (n == 1)
		return (1);
	if (j < 1 || n < 1)
		return (-1);

	return (helper(n, i, j));
}
