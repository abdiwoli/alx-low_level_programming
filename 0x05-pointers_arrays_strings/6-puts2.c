#include "main.h"
/**
 * puts2 - prints even chars
 * @str: string param
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}