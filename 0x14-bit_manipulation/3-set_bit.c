#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: Addresss of n
 * @index:  the index, starting from 0 of the bit you want to set
 * Return: 1 Success , 0 Fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | 1ul << index;
	return (1);
}