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
	int *ptr = malloc(sizeof(int) * len);

	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = i;
	ptr[len] = '\0';
	return (ptr);
}
