#include "main.h"

/**                                                                                                                          
 * _abs - gets the absolute number                                                                                           
 * Return: absolute int                                                                                                      
 * @n: takes an int number                                                                                                   
 * author abdiwoli                                                                                                           
*/

int _abss(int n)
{
        return (n < 0 ? n * -1 : n > 0 ? n : 0);
}

/**
 * print_last_digit - prints the last digit
 * Return: return int
 * @n: takes int
*/

int print_last_digit(int n)
{
	int lastD;
	lastD = _abss(n) % 10;
	_putchar(lastD + '0');
	_putchar(lastD + '0');
	return (0);
}
