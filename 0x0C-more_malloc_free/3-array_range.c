#include "main.h"
#include <stdlib.h>
/**
 * array_range - function creates array
 * @min:  number from min
 * @max: the max number
 * Return: pointer int type
 */

int *array_range(int min, int max)
{
	int i, len = max - min + 2;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * len);

	if (!ptr)
		return (NULL);
	for (i = min; i < (max + 1); i++)
		ptr[i] = i;
	ptr[max + 1] = '\0';
	return (ptr);
}
