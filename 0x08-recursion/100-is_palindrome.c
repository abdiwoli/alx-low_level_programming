#include "main.h"
#include <string.h>
/**
 * helper - funtion to check if is_palindrome
 * @s: the string
 * @len: the len of the string
 * @n: to move the locationn of the string
 * Return: 0, 0
 */
int helper(char *s, int len, int n)
{
	if (*(s + n) == *(s + len - 1) && *(s + n) != '\0')
	{
		n++;
		len--;
		return (helper(s, len, n));
	}
	else if (*(s + n) == '\0')
		return (1);
	return (0);
}
/**
 *  is_palindrome - function finds if string is palindrome
 * @s: the string
 * Return: int 0, 1
 */
int is_palindrome(char *s)
{
	int i = strlen(s);
	int n = 0;

	return (helper(s, i, n));
}
