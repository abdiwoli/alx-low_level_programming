#include<stdio.h>
/**
* main - function prints small alphabets
* Return:  return 0
*/
int main(void)
{
/**
 * spacecoma - prints comma and space
 * @f: holds char
*/
	void spacecoma(char f)
	{
		putchar(f);
	}
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
			spacecoma(',');
			spacecoma(' ');
		}

	}
	putchar('\n');
	return (0);
}
