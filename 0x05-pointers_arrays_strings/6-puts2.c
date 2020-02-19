#include "holberton.h"
/**
  * puts2 - Print a string in rev
  * @str: String to print
  *
  * Return: nothing
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
