#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_array - reverse array
 * @a: is the array
 * @n: the size
 */
void reverse_array(int *a, int n)
{
	int i, f;
	int *copyarray = malloc(n * sizeof(int));

	f = n;
	for (i = 0; i < n; i++)
	{
		copyarray[i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		f--;
		a[i] = copyarray[f];
	}
}
