#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the digit numbers 0-9
*
* Return: 0
*/
int main(void)
{
	int c = '0';

	while (c < '9')
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar(c);
	return (0);
}
