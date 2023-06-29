#include "main.h"
/**
 * *_strcat - a function that concatenates two strings
 *@dest: appens other srring
 *@src: another string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp != '\0')
		tmp++;

	while (*src != '\0')
	{
		*tmp = *src;
		src++;
		tmp++;
	}

	*tmp = '\0';

	return dest;
}

