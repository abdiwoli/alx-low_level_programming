#include<stdio.h>

/**
* alphap - function prints new line
*/

void alphap(char c, char a, char z)
{
	for (c = a; c < z; c++)
	putchar(c);
	putchar('\n');
}
/**
* main - function prints small alphabets
* Return:  return 0
*/
int main(void)
{
char c;
c = 'a';
z = 'z';
a = 'a';
alpha(c, a, z);
return (0);
}
