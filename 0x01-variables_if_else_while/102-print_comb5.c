#include <stdio.h>

/**
 * main - function prints two-digit combinations
 * Return: 0
 */
int main(void)
{
	int tens_digit1, ones_digit1, tens_digit2, ones_digit2; 

	for (tens_digit1 = 0; tens_digit1 < 10; tens_digit1++)
	{
		for (ones_digit1 = 0; ones_digit1 < 10; ones_digit1++)
		{
			for (tens_digit2 = tens_digit1; tens_digit2 < 10; tens_digit2++)
			{
				for (ones_digit2 = (tens_digit1 == tens_digit2) ? ones_digit1 + 1 : 0; ones_digit2 < 10; ones_digit2++)
				{
					printf("%02d %02d", tens_digit1, ones_digit1);
					putchar(',');

					if (tens_digit2 == 9 && ones_digit2 == 9)
					{
						printf(" %02d %02d\n", tens_digit2, ones_digit2);
					}
					else
					{
						printf(" %02d %02d, ", tens_digit2, ones_digit2);
					}
				}
			}
		}
	}

	return (0);
}
