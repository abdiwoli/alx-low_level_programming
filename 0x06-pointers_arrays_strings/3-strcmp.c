#include "main.h"
/**
 * strcmp -compare two strings
 * @str1: first string
 * @str2: second pare
 * Return: int;
 */
int strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}

	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
