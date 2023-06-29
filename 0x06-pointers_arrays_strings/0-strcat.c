#include "main.h"
/**
 * *_strcat - a function that concatenates two strings
 *@dest: appens other srring
 *@src: another string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest ++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
	}
	*dest = '\0';
	return dest;
}
