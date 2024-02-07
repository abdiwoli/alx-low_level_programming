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
	size_t low = 0, high = size -1; 
	size_t mid = size/2; 

	if (size == 1)
		return -1;
	if (size > 0 && array != NULL)
	{
		while(size > 1)
		{
			printf("Searching in array\n");
			print_array(array, size); 
			size--; 
 
		}
		return 2;
	}
	return -1;
}
