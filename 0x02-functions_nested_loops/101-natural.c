#include <stdio.h>

/**
* main - prints the sum of all multiples
* of 3 or 5 below 1024
*
* Return: 0
*/
int main(void)
{
	int i;
	int m3;
	int m5;
	int sum;

	sum = 0;
	for (i = 0 ; i < 1024 ; i++)
	{
		m3 = i % 3;
		m5 = i % 5;
		if (m3 == 0 || m5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
