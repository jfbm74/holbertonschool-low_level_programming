#include "holberton.h"

/**
 * print_number - Print any number one character at a time
 * @n: Number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	int res;
	int x;

	x = n;
	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}
	if (x / 100000 != 0)
	{
		res = x / 100000;
		_putchar(res / 10000 % 10 + '0');
		_putchar(res / 1000 % 10 + '0');
		_putchar(res / 100 % 10 + '0');
		_putchar(res / 10 % 10 + '0');
		_putchar(res % 10 + '0');
	}
	res = x % 100000;
	if (res / 10000 % 10 != 0)
	{
		_putchar(res / 10000 % 10 + '0');
		_putchar(res / 1000 % 10 + '0');
		_putchar(res / 100 % 10 + '0');
		_putchar(res / 10 % 10 + '0');
	}
	else if (res / 1000 % 10 != 0)
	{
		_putchar(res / 1000 % 10 + '0');
		_putchar(res / 100 % 10 + '0');
		_putchar(res / 10 % 10 + '0');
	}
	else if (res / 100 % 10 != 0)
	{
		_putchar(res / 100 % 10 + '0');
		_putchar(res / 10 % 10 + '0');
	}
	else if (res / 10 % 10 != 0)
		_putchar(res / 10 % 10 + '0');
	_putchar(res % 10 + '0');
}
