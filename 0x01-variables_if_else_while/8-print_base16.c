#include<stdio.h>
/**
 * main - is the only function
 * Return: always 0
 * author - by abdiwoli hassen
*/
int main(void)
{
	int c;

	for (c = 0; c < 16; c++)
	{
		if (c < 10)
			putchar(c + '0');
		else if (c > 9)
			putchar(c - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
