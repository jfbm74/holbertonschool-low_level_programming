#include "holberton.h"
/**
 * print_binary - prints binary representation of a number
 * @n: Given number
 * Return: Nohing
 */
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
	}
	print_binary(n >> 0x01);
	_putchar((n & 0x01) + '0');
}