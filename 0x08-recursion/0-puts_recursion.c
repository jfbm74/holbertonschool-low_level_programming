#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: given string
 * Return: nothing
*/
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
