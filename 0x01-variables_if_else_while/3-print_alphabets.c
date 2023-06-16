#include<stdio.h>

/**
* alphap - function prints new line
* @c: take a or A to loop over
* @a:  takes A or a for condition
* @z: takes z or Z for break poin
*
* this function prints alphbet
*/

void alphap(char c, char a, char z)
{
	for (c = a; c < z; c++)
	putchar(c);
}
/**
* main - function prints small alphabets
* Return:  return 0
*/
int main(void)
{
	char c, a, z;

	c = 'a';
	z = 'z';
	a = 'a';
	alphap(c, a, z);
	c = 'A';
	z = 'Z';
	a = 'A';
	alphap(c, a, z);
	puchar('\n');
	return (0);
}
