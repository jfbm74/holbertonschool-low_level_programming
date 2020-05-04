#include "holberton.h"

/**
* _isupper - return a value is a char is upper or lowercase
* @c: ven value
* Return: 1 is uppercase, 0 is otherwhise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
