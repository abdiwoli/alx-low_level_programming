#include <stdio.h>
/**
 * interpolation_search - function name
 * @array: array
 * @size: the size
 * @value: target
 * Return: index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	for (; low <= high && value >= array[low] && value <= array[high]; )
	{
		size_t part1 = (high - low) / (array[high] - array[low]);
		size_t pos = low + (double)(part1 * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[2109] is out of range\n");
	return (-1);
}
