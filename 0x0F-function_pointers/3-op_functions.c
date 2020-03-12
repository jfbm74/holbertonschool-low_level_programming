#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Function that adds 2 integers
 * @a: first integer
 * @b: second integer
 * Return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function that subs 2 integers
 * @a: first integer
 * @b: second integer
 * Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function that multip 2 integers
 * @a: first integer
 * @b: second integer
 * Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function that divide 2 integers
 * @a: first integer
 * @b: second integer
 * Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - a integer mod int b
 * @a: first integer
 * @b: second integer
 * Return: result
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
