#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searching function
 * @array: int aray
 * @size: the size
 * @value: target
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int step = sqrt(size);
	unsigned int left = 0;
	unsigned int right = 0;
	unsigned int i;

	if (array == NULL || size == 0)
		return (-1);

	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		right = (size - 1 < right ? size - 1 : right);
		if (array[left] <= value && array[right] >= value)
			break;
		left += step;
	}
	if (value > array[right])
	{
		printf("Value found between indexes [%d] and [%d]\n",
		       left - step, left);
		printf("Value checked array[%d] = [%d]\n",
		       left - step, array[left - step]);
	}
	else
		printf("Value found between indexes [%d] and [%d]\n",
		       left, right);
	if (left >= size || array[left] > value)
	{
		return (-1);
	}
	right = (size - 1 < right ? size - 1 : right);
	for (i = left; i <= right && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
