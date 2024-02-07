#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints array
 * @array: array size
 * @size: size
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (array == NULL || size < 1)
		return;

	printf("Searching in array: ");
	for (; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - function
 * @array: array
 * @size: teh sixe
 * @value: the target
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t mid;
	int index = -1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		print_array(array + low, high - low + 1);
		if (array[mid] == value)
		{
			index = mid;
			break;
		}
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (index);
}
