#include "main.h"
int helper(int x, int y, int result, int i)
{
	if (i < y)
	{
		result *= x;
		return (helper(x, y, result, i + 1));
	}
	return (result);
}
/**
 * _pow_recursion - function raises to the power of y
 * @x: the int number to raise
 * @y: an int number that raises x to its power
 * Return: int type the the raised number
 */
int _pow_recursion(int x, int y)
{
	int result = 1;
	int i = 0;
	
	if (y < 0)
		return (-1);
	return (helper(x, y, result, i));
}
