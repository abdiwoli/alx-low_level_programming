#include "main.h"
/**
 * _pow_recursion - function raises to the power of y
 * @x: the int number to raise
 * @y: an int number that raises x to its power
 * Return: int type the the raised number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
