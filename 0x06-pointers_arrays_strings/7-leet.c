#include "main.h"
#include <stdio.h>
/**
 * leet - function that encodes a string into 1337.
 * @s: string
 * Return: char
 */
char *leet(char *s)
{
	int i;

	DictionaryEntry dictionary[] = {
		{'a', 4},
		{'A', 4},
		{'e', 3},
		{'E', 3},
		{'o', 0},
		{'O', 0},
		{'t', 7},
		{'T', 7},
		{'l', 1}
	};
	while (*s != '\0')
	{
		for (i = 0; i < 9; i++)
		{
			if (dictionary[i].letter == *s)
				*s = dictionary[i].value + '0';
		}
		s++;
	}
	return (s);
}
