#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - unction that prints numbers, followed by a new line.
 * @separator: tring to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int res;

	va_start(args, n);

	res = 0;
	if (separator == NULL)
	{
		;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			res = va_arg(args, int);
			printf("%d", res);
			if (i < (n - 1))
			{
				printf(", ");
			}
		}
		printf("\n");
		va_end(args);
	}
}
