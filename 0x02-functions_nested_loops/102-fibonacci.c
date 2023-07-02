#include <stdio.h>
/**
 * main - main fun
 * Return: 0
 */

int main(void)
{
	unsigned long next = 1;
	unsigned long prev = 0;
	unsigned long temp;
	int i;

	char *c = ", ";

	for (i = 1; i < 50; i++)
	{
		if (i == 49)
			c = "\n";
		temp = next;
		next = next + prev;
		printf("%lu%s", next, c);
		prev = temp;
	}

	return (0);
}
