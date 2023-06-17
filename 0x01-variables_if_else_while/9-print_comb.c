#include<stdio.h>
/**
* main - function prints small alphabets
* Return:  return 0
*/
int main(void)
{
	int c, i;

	char *arr[2];

	arr[0] = ",";
	arr[1] = " ";
	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
			for (i = 0; i < 2; i++)
				putchar(*arr[i]);
		}

	}
	putchar('\n');
	return (0);
}
