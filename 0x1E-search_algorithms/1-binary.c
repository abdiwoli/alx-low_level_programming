#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (array == NULL || size < 1)
		return;

	for (; i < size; i++)
		printf("%d, ", array[i]);
	printf("\n");
}


int binary_search(int *array, size_t size, int value)
{
	if (size == 1)
		return -1;
	if (size > 0 && array != NULL)
	{
		size_t mid = size / 2;
		int flag = size % 2;

		printf("mid is %lu\n", mid);
		printf("value is %d\n",  array[mid]);
		printf("target is %d\n", value);

		printf("Searching %d in array ", value);
		print_array(array, size);

		if (array[mid] == value && size > 2)
			return mid;
		else if (array[mid] < value)
		{
			array = array + mid;
			size = size - mid;
			if (flag)
			{
				size++;
				flag = 0;
			}
		}
		else
		{
			size = mid;
		}
		binary_search(array, size -1, value);
	}
	return (-1);
}
