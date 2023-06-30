#include "main.h"
#include <stdio.h>

/**
 * rot13 - decode and encode function
 * @s: string to be encoded/decoded
 *
 * Return: Pointer to the modified string
 */
char *rot13(char *s)
{
	int i;
	char *new_ptr = s;
	char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *str2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == str1[i])
			{
				*s = str2[i];
				break;
			}
		}
		s++;
	}

	return (new_ptr);
}
