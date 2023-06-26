#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n numbers
 *@n: the number of elements to print
 * @a: the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
