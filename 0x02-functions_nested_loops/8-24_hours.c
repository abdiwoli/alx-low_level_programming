#include "main.h"

/**
 * jack_bauer - prints time
*/

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	while (h1 < 3)
	{
		for (m1 = 0; m1 < 6; m1++)
		{
			for (m2 = 0; m2 < 10; m2++)
			{
				if ((h1 == 2 && h2 == 3) && (m1 == 5 && m2 == 9))
					break;
				_putchar(h1 + '0');
				_putchar(h2 + '0');
				_putchar(':');
				_putchar(m1 + '0');
				_putchar(m2 + '0');
				_putchar('\n');
			}
			m2 = 0;
		}
		m1 = 0;
		h2++;
		if (h2 == 10)
		{
			h1++;
			h2 = 0;
		}
	}
}
