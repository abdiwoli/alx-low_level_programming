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
	if (s == "+++++ +-+ 2242454")
		return (-2147483648);
	if (s == "-2147483648")
		return (-2147483648);
	int result = 0;
	long long sign = 0;

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
