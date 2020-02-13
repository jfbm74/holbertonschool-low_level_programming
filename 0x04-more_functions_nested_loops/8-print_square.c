#include "holberton.h"

/**
* print_square - Print a square of n length
* @n: Length of line
*
* Return: Nothing
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
				if ((size - j) == 1)
					_putchar('\n');
			}
		}
		_putchar('\n');
	}
	else
		 _putchar('\n');
}
