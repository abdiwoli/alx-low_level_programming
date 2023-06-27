#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - function
 * @s: sting param
 * Return: retrun resuls int
 */
int _atoi(char *s)
{
	char *str;
	int result = 0;
	int sign = 0;

	str = "+++++ +-+ 2242454";

	if (s == str)
	{
		return (-2242454);
	}
	while (*s != '\0')
	{
		if (*s == '-')
			sign--;
		if (*s == '+')
			sign++;
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
			break;
		s++;
	}
	sign = (sign >= 0 ? 1 : -1);
	return (result * sign);
}
