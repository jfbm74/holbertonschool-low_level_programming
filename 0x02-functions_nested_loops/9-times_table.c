#include "holberton.h"
/**
* times_table - prints mult tables
* @h1 @h2 @m1 @m2  : the integer to print the last digit of
*
* Return: Null
*/
void times_table(void)
{
	int i;
	int j;
	int d;
	int u;
	int result;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			result = i * j;
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
				_putchar(u + '0');

			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			
		}
		_putchar('\n');
	}
}

