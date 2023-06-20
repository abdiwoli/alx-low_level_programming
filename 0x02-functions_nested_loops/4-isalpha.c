#include "main.h"
/**
 * _isalpha - function that determines if c is later or number;
 * Return: return 1 or 0
 * @c: argument is an int type
*/
int _isalpha(int c)
{
	return (c >= 65 && c <= 122 ? 1 : 0);
}
