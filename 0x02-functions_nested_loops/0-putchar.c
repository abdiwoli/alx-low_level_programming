#include <unistd.h>
/**
 * putcharprinter - is a function that prints _putchar
 * Return: retruns 0
*/

void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * main - main function to cal other functions
 * Return: returns 0
 */

int main(void)
{
	char *text = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(text[i]);
	return (0);
}
