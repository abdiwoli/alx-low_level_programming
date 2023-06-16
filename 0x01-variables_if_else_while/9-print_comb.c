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
		for(n = 0; n < 10; n++)
			putchar(n * c + '0' + ',');
		putchar('\n');
	}
	return (0);
}
