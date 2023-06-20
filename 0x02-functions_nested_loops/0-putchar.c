#include <unistd.h>
#include "main.h"
/**
 * putcharprinter - is a function that prints _putchar
 * Return: retruns 0
*/

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
