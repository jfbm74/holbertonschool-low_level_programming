#include "holberton.h"

/**
* print_line - print a line with n characters long
*
* @n : times long line
*/
void print_line(int n)
{
	int i;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
