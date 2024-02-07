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

	if (array == NULL || size <= 0)
		return (-1);

	while (size)
	{
		size_t part1 = (high - low) / (array[high] - array[low]);
		size_t pos = low + (double)(part1 * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}

	return (-1);
}
