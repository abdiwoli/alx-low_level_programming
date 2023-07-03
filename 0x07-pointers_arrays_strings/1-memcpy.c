#include "main.h"
/**
 * _memcpy - function copies memory
 * @src: the source copy from
 * @dest: destination copy to
 * @n: the size
 * Return: returns pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		*ptr++ = *src++;
	}
	return (dest);
}
