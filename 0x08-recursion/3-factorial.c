#include "main.h"
/**
 * factorial - function getes fuctorial numbers
 * @n: integer param
 * Return: returns n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
