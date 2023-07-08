#include <stdio.h>
/**
 * main - main fun
 * Return: 0
 */
#include <stdio.h>
#include <stdio.h>

int main(void)
{
	unsigned long next = 1;
	unsigned long prev = 0;
	unsigned long n1_h1, n1_h2, n2_h1, n2_h2, temp, h1, h2;
	int i;
	char *c = ", ";

	for (i = 1; i <= 92; i++)
	{
		temp = next;
		next += prev;
		printf("%lu%s", next, c);
		prev = temp;
	}
	n1_h1 = prev / 10000000000;
	n1_h2 = prev % 10000000000;
	n2_h1 = next / 10000000000;
	n2_h2 = next % 10000000000;
	for (; i < 99; i++)
	{
		h1 = n1_h1 + n2_h1;
		h2 = n1_h2 + n2_h2;
		if (h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%010lu%s", h1, h2, (i != 98) ? c : "\n");
		n1_h1 = n2_h1;
		n1_h2 = n2_h2;
		n2_h1 = h1;
		n2_h2 = h2;
	}
	return (0);
}

