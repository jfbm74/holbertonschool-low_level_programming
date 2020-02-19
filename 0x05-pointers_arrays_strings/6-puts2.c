#include "holberton.h"
/*
 * puts2 - program that prints every other char of a string
 * eliminar libreria stdio
 * @str: given string
 */
void puts2(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
