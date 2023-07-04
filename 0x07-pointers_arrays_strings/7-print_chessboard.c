#include "main.h"
/**
 * print_chessboard - prints chess
 * @a: array index param
 */
void print_chessboard(char (*a)[8])
{
	int j, i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		if (i < 8)
			_putchar('\n');
	}
}
