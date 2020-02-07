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
	int j;
	int h;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = i + 1 ; j <= '9' ; j++)
		{
			for (h = j + 1 ; h <= '9' ; h++)
			{
				putchar(i);
				putchar(j);
				putchar(h);
				if (!(i == '7' && j == '8' && h == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
