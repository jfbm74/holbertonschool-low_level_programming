#include "holberton.h"
#include <stdio.h>
/**
*  print_last_digit - program that prints last digit value
* Return: n - absolute value of n
*  @n: number to check
*/
int print_last_digit(int n)
{
	if ((n % 10) < 0)
	{
		n =  n * -1;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
