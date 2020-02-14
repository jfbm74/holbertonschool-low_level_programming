#include "holberton.h"
#include <stdio.h>
#define X 612852475143
/**
* main - Print program prints the largest prime factor of the number
*
* Return: 0
*/
int main(void)
{
	long acu;
	long res;
	long pf;

	acu = 0;
	res = X;
	pf = 2;
	while (res != 1)
	{
		while ((res % pf) == 0)
		{
			res = res / pf;
			acu = pf;
		}
		pf++;
	}
	printf("%lu\n", acu);
	return (0);
}
