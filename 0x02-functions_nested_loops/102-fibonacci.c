#include <stdio.h>
/**
 * main - main fun
 * Return: 0
 */

int main(void)
{
	int next = 1;
	int prev = 0;
	int temp, i;

	char *c = ", ";

	for (i = 1; i < 50; i++)
	{
		if (i == 49)
			c = "\n";
		temp = next;
		next = next + prev;
		printf("%d%s", next, c);
		prev = temp;
	}

	return (0);
}
