#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strpbrk - function that searches strings 
 * @s: the string or source
 * @accept: the string to search
 * Return : returns pointer
 */
char *_strpbrk(char *s, char *f)
{
	char *p = strstr(s, f);
	return (p != NULL) ? p : NULL;
}
