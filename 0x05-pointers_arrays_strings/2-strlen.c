# include "main.h"
/**
 * _strlen - returns length of param
 * @s: string pram
 * Return: int type
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
