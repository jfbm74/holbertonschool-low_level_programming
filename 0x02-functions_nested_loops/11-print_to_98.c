#include "holberton.h"
#include <stdio.h>
/**
*  print_to_98 - prints mult tables
* @n : variable defined @n : variable defined
* Return: Null
*/
void print_to_98(int n)
{
	int tmp;

	if (n == 98)
	{
		printf("%d", n);
	} else if (n < 98)
	{
		for (tmp = n; tmp < 99; tmp++)
		{
			printf("%d", tmp);
			if (!(tmp == 98))
				printf(", ");
		}
	} else if (n > 98)
	{
		for (tmp = n ; tmp >= 98  ; tmp--)
		{
			printf("%d", tmp);
			if (!(tmp == 98))
				printf(", ");
		}
	}
	printf("\n");
}
