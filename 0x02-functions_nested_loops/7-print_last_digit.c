#include "main.h"
/**
 * print_last_digit - prints the last digit
 * Return: return int
 * @n: takes int
*/

int print_last_digit(int n)
{
	lastD = _abs(n) % 10;
	return (n < 0 ? lastD * -1 : lastD);
}
