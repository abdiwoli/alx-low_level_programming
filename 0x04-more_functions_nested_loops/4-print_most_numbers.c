#include "main.h"
/**
 * print_most_number - prints mots numbers
 */
void print_most_number(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 3)
			_putchar(i + '0');
	}
	_putchar('\n');
}