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
		else if (*s == ' ' && f == 1)
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
	char *sc = malloc(sizeof(char) * (lenword(s) + 1));
	char *st = sc;

	while (*s)
	{
		if (*s != ' ')
			f = 1;
		else if (*s == ' ' && f == 1)
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
	char **array;
	int i = 0, word_count = 0;

	if ((strlen(s) == strspn(s, " ") && strlen(s) != 0) || *s == '\0')
		return (NULL);
	array = malloc(sizeof(char *) * (lenword(s) + 1 + 1));
	if (array == NULL)
		return (NULL);

	while (*s)
	{
		if (*s != ' ')
		{
			char *w = word(s);

			array[i] = w;
			s += lenword(s);
			i++;
			word_count++;
		}
		else
		{
			s++;
		}
	}
	array[word_count] = NULL;

	return (array);
}
