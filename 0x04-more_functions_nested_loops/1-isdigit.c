#include "holberton.h"

/**
* _isdigit - return a value is a char is a digit or not
* @c: given value
* Return: 1 is digit, 0 is otherwhise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
