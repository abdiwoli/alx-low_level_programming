#include <stdarg.h>
/**
* sum_them_all - funtion that returns sum of all arguments
* @n: num of arguments
* @...: other arguments
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list lis;
	unsigned int i;
	int sum = 0;

	va_start(lis, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lis, int);
	va_end(lis);
	return (sum);
}
