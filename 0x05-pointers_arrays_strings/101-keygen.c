#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 */
int main(void)
{
	char *s = malloc(9 * sizeof(char));
	srand(time(NULL));
	s[0] = 'A' + rand() % 26;
	s[1] = '0' + rand() % 10;
	s[2] = 'A' + rand() % 26;
	s[3] = 'a' + rand() % 26;
	s[4] = '!' + rand() % 6;
	s[5] = 'A' + rand() % 26;
	s[6] = 'A'+ rand() % 26;
	s[7] = 'a' + rand() % 26;
	s[8] = '\0';
	printf("%s\n", s);
	return (0);
}
