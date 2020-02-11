#include "holberton.h"
/**
* print_alphabet - program that prints Holberton, followed by a new line.
*
* Return: 0
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
