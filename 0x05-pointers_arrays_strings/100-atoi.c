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
	int result = 0;
	int sign = 1;
	while(*s != '\0')
	{
		if(*s == '-')
			sign = -1;
		if(*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if(result > 0)
			break;
		s++;
	}
	return (result * sign);
}
