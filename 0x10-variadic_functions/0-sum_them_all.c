#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: parameters counter
 * Return: result of adding
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;
	va_list	args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		res = res + va_arg(args, int);
	}
	va_end(args);
	return (res);
}
