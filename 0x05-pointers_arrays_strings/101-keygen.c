#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int s[100];

	for (i = 0; i < 100; i++)
	{
		s[i] = rand() % 78;
		putchar(s[i] + '0');
	}
	return (0);
}
