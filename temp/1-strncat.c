#include "main.h"
/**
 * *_strncat - a function that concatenates two strings
 *@dest: appens other srring
 *@src: another string
 *@n: teh size
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*tmp != '\0')
		tmp++;
	while (*src != '\0' && n > 0)
	{
		*tmp = *src;
		src++;
		tmp++;
		n--;
	}
	*tmp = '\0';
	return (dest);
}
