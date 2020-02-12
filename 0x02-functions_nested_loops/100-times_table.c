#include "holberton.h"

/**
* print_times_table - prints mult tables
* @h1 @h2 @m1 @m2  : the integer to print the last digit of
*
* Return: Null
*/
void print_times_table(int n)
{
	int i;
	int j;
	int c;
	int d;
	int u;
	int result;
	
	if (!((n >= 0) ^ (n <= 15)))
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				result = i * j;
				c = result / 100;
				d = result / 10;
				u = result % 10;

				if (j == 0)
				{
					_putchar(u + '0');
				}
				else if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(u + '0');

				}
				else if (result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
					_putchar(u + '0');
				}
				else if (result > 99)
				{
					d = (result - 100) / 10;
					_putchar(',');
					_putchar(' ');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar(u + '0');
				}
			}
			_putchar('\n');
		}
	}
	
}
