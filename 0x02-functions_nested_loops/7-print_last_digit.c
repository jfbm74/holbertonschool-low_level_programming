#include "holberton.h"
/**
* print_last_digit - print last digit of an integer
* @n: the integer to print the last digit of
*
* Return: Value of last digit
*/
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
