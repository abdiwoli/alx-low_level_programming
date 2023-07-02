#include <stdio.h>
#include <gmp.h>

int main(void)
{
	mpz_t next, prev, temp;
	int i;

	char *c = ", ";

	mpz_set_ui(next, 1);
	mpz_set_ui(prev, 0);
	mpz_init(temp);

	for (i = 1; i <= 98; i++)
	{
		if (i == 98)
			c = "\n";

		mpz_add(temp, next, prev);
		gmp_printf("%Zd%s", temp, c);

		mpz_set(prev, next);
		mpz_set(next, temp);
	}

	mpz_clear(next);
	mpz_clear(prev);
	mpz_clear(temp);

	return 0;
}
