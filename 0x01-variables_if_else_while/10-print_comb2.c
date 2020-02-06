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
	int i = '0';
	int j = '0';

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '9' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
