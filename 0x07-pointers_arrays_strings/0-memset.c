#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: the pointer to fill
 * @b: the value to fill
 * @n: the size
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
unsigned int i;

for (i = 0; i < n; i++)
{
*p++ = b;
}
return (s);  
}
