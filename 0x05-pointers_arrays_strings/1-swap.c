#include "holberton.h"
/**
 * swap_int - Function that swap de value of 2 vars
 * @a: Value of variable a
 * @b: Value of variable b
 */
void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *b;
	*b = *a;
	*a = ptr;

}
