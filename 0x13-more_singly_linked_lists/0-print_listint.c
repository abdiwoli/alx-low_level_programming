#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>
/**
 * case_min - function dealin INT_MIN
 * Return: int
 */
int case_min(void)
{
	char minStr[] = "-2147483648";
	int pos;

	for (pos = 0; pos < 11; pos++)
		putchar(minStr[pos]);
	return (11);
}

/**
 * _putd - function prints digits for %d and %i format specifiers
 * @num: int passedx
 * Return: number of digits printed
 */

int _putd(int num)
{
	char buffer[20];
	int pos = 0;
	int n = 0;

	if (num == 0)
	{
		n++;
		putchar('0');
		return (n);
	}
	if (num == INT_MIN)
		return (n + case_min());
	if (num < 0)
	{
		n++;
		putchar('-');
		num = -num;
	}
	while (num != 0)
	{
		buffer[pos] = '0' + (num % 10);
		num /= 10;
		pos++;
	}
	while (pos > 0)
	{
		pos--;
		n++;
		putchar(buffer[pos]);
	}
	return (n);
}
/**
 * print_listint - function prints int
 * @h: linked list paramater
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n, num;

	while (h)
	{
		n = h->n;
		_putd(n);
		putchar('\n');
		num++;
		h = h->next;
	}
	return (num);
}
