#include "holberton.h"
/**
* print_times_table - prints mult tables
* @n  : the integer to print the times tables
*/
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15 )
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				if (j == 0)
				{
					_putchar(0);
				}
				if (!(j == n && i == n))
				{
					_putchar(',');
					_putchar(' ');
				}
				else if ((i * j) > 99)
				{
					_putchar(((i * j) / 100 ) + '0');
					_putchar((((i * j) / 10 ) % 10 ) + '0');
					_putchar(((i * j) % 10 ) + '0');
				}
				else if ((i*j) < 100)
				{
					 _putchar(' ');
					 _putchar(((i * j) / 10 ) + '0');
					 _putchar(((i * j) % 10 ) + '0');
				}
				else if ((i*j) < 10)
				{
					 _putchar(' ');
					 _putchar(' ');
					 _putchar(((i * j) % 10 ) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
