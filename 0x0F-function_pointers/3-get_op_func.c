#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *  get_op_func - validate type of operations
 *  @s: given operator
 *  Return: Pointer to functions
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}
		i++;
	}
	if (i > 4)
	{
		printf("Error\n");
		exit(99);
	}
	return (ops[i].f);
}
