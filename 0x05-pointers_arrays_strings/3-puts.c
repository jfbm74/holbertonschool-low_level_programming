#include "holberton.h"
/**
* _puts - Print a string
* @str: Pointer to the string
*
*/
void _puts(char *str)
{
	int len;

	len = 0;
	while ((str[len]) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
