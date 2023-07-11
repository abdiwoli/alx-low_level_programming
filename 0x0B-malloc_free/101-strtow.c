
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * lenword - function gettes the len of each word
 * @s: the string
 * Return: int the len
 */
int lenword(char *s)
{
	int f = 0;
	int n = 0;

	while (*s)
	{
		if (*s != ' ')
			f = 1;
		if (*s == ' ' && f == 1)
			break;
		s++;
		n++;
	}
	return (n);
}

/**
 * word - function getss each word
 * @s:  teh string
 * Return: one word
 */
char *word(char *s)
{
	int f = 0;
	char *sc = malloc(sizeof(char) * 10);
	char *st = sc;

	while (*s)
	{
		if (*s != ' ')
			f = 1;
		if (*s == ' ' && f == 1)
			break;
		if (*s != ' ')
		{
			*sc = *s;
			sc++;
		}
		s++;
	}
	*sc = '\0';
	return (st);
}

/**
 * strtow - function returns array of words
 * @s: string
 * Return: array
 */

char **strtow(char *s)
{
	char **array = malloc(sizeof(char *) * strlen(s) + 1);
	int i = 0;

	if (s == NULL || (strcmp(s, " ") == 0 && strlen(s) == 1) || *s == '\0')
	    return (NULL);

	while (*s)
	{
		char *w = word(s);

		if (w != NULL)
		{
			array[i] = w;
			i++;
		}
		s += lenword(s);
		if (strcmp(s, " ") == 1 && *(s + 1) == '\0')
			break;
	}
	if (strcmp(array[i - 1], " ") == 1)
		i--;
	array[i] = NULL;

	return (array);
}
