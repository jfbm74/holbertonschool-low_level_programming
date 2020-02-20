#include "holberton.h"
/**
 * rev_string - Print a string in rev
 * @s: String to print
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
	/*if (len % 2 == 0)
	{*/
		for (i = (len /2) ;  str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	/*}
	else
	{
		for (i = ((len / 2) - 1); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}*/
	_putchar('\n');
}
