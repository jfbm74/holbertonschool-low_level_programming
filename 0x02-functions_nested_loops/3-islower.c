#include "holberton.h"
/**
*  _islower - program that evaluates if a char is lowercase
*  @c: Letter to check
* Return: 1 is lowercase ; 0 not lowercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
