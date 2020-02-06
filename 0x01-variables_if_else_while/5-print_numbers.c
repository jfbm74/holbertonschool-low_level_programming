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
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
