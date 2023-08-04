#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * fillArrayWithBits - fill array binary
 * @binary: array
 * @len: the len
 */
void fillArrayWithBits(int binary[], int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		binary[i] = 1 << (len - 1 - i);
	}
}
/**
 * binary_to_uint - function converts binary
 * @b: binary string
 * Return: the digit
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = b == NULL ? 0 : strlen(b);
	unsigned int sum = 0;
	int *binary = (int *)malloc(len * sizeof(int));

	if (b == NULL || binary == NULL)
		return (0);
	fillArrayWithBits(binary, len);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			if (*b == '1')
				sum += binary[i];
		}
		else
			return (0);
		b++;
		i++;
	}
	return (sum);
}
