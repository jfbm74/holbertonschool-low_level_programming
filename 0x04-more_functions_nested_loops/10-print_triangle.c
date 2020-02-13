#include "holberton.h"

/**
* print_triangle - Print a square of size length
* @size: Length of square
*
* Return: Nothing
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 0 ;  j <= size ; j++)
		{
			k = size - i;
			if (j <= k)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
