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
		putchar(c + '0');
		if(c>9)
			putchar(c - 10 + 'a');
	}
	char('\n');
	return (0);
}
