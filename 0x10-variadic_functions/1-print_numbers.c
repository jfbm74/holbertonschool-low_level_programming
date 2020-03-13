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

	va_start(args, n);

	if (separator == NULL)
	{
		;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < (n - 1))
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
