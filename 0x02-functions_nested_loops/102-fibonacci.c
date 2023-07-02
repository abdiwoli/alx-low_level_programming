#include <stdio.h>
/**
 * main - main fun
 * Return: 0
 */

int main(void)
{
	int next = 1;
	int prev = 0;
	char *c = ", ";

	for (int i = 1; i < 50; i++)
	{
		if (i == 49)
			c = "\n";
		int temp = next;
		next = next + prev;
		printf("%d%s", next, c);
		prev = temp;
	}

	return (0);
}
