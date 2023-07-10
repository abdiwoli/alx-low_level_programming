#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - conconates all arguments
 * @ac: int
 * @av:arguments
 * Return: ponter
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int len = 0;
	int ln1 = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac > 0)
	{
		ac--;
		len += strlen(av[ac]) + 1;
	}
	ptr = malloc(sizeof(char) * len +1);
	ptr[0] = '\0';
	while (ac < ln1)
	{
		strcat(ptr, av[ac]);
		strcat(ptr, "\n");
		ac++;
	}
		return (ptr);
}
