#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: given number to search for
 * @index:  is the index, starting from 0 of the bit you want to get
 * Return: Value of searched bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	n =  n >> index;
	return ((n & 1));
}
