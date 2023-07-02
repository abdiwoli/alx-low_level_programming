#include <stdio.h>
/**
 * main - main fun
 * Return: 0
 */

int main(void)
{
	unsigned long next = 1;
	unsigned long prev = 0;
	unsigned long temp, sum;
	int i;

	sum = 0;
	for (i = 1; i <= 50; i++)
	{
		temp = next;
		next = next + prev;
		if (next % 2 == 0)
			sum += next;
  		prev = temp;
	}
	printf("%lu\n", sum);

	return (0);
}
