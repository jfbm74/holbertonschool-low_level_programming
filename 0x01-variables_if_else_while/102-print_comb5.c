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
	int i;
	int j;
	int k;
	int l;

	for (i = '0' ; i <= '9' ; i++)
	{
		for  (j = '0' ; j <= '8' ; j++)
		{
			for (k = i ; k <= '9' ; k++)
			{
				for (l = j + 1 ; l <= '9' ; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
