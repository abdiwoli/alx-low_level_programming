#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - finds value using linear
 * @size:the array size
 * @array: the array itself
 * @value: the value to search for
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	if (size > 0 && array != NULL)
	{
		size_t i = 0;
		for (; i < size; i++)
		{
			printf("Value checked array[%zu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return ((int) i);
		}
	}
	return (-1);

}
