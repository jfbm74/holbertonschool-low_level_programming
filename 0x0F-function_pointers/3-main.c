#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - function that calculates 5 operations
 * @argc: counter of arguments
 * @argv: values of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	int res;
	int (*opr)(int, int);

	res = 0;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opr = get_op_func(argv[2]);
	res = opr(a, b);
	printf("%d\n", res);
	return (0);
}
