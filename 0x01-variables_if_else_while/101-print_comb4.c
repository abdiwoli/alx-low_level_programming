#include <stdio.h>

/**
 * main - function prints three-digit numbers
 * Return: 0
 */
/*author abdiwoli*/
int main(void)
{
	int hundreds_digit, tens_digit, ones_digit;

	for (hundreds_digit = 0; hundreds_digit < 10; hundreds_digit++)
	{
		for (tens_digit = hundreds_digit + 1; tens_digit < 10; tens_digit++)
		{
			for (ones_digit = tens_digit + 1; ones_digit < 10; ones_digit++)
			{
				putchar(hundreds_digit + '0');
				putchar(tens_digit + '0');
				putchar(ones_digit + '0');

				if (hundreds_digit != 7 || tens_digit != 8 || ones_digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
