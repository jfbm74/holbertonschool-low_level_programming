#include "holberton.h"
/**
 * puts_half - Print a string in rev
 * @str: String to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	for (i = 0; str[i] != '\0' ; i++)
		len++;
		for (i = (len / 2) ;  str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
