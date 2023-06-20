#include<stdion.h>
/**
 * putcharprinter - is a function that prints _putchar
 * Return: retruns 0
 */
#include <unistd.h>

void _putchar(char c) {
	write(1, &c, 1);
}
