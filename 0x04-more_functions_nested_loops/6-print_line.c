#include "holberton.h"

/**
* print_line - print a line with n characters long
*
* @i: print character _  loops
* Return: product
*/
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
