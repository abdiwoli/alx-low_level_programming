#include "main.h"
/**
 * helper - function helps to check if n is prime
 * @n: int varible
 * @i: int i starts from 2
 * Return: 1 or 0
 */
int helper(int n, int i)
{
	if (n < 2)
		return (0);
	else if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	i++;
	return (helper(n, i));
}

/**
 *  is_prime_number - function to get prime
 * @n: int number to check
 * Return: return 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	return (helper(n, i));
}
