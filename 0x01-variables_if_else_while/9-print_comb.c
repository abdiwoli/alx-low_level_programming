#include<stdio.h>
/**
* main - function prints small alphabets
* Return:  return 0
*/
int main(void)
{
	int c;
	int n;
	for( c = 0; c < 10; c++)
	{
		putchar(c+'0');
		if (c != 9)
			putchar(',');
	}
	putchar('\n');
	return (0);
}
