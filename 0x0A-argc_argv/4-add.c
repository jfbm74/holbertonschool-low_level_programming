#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that adds positive numbers.
 * @argc: args counter
 * @argv: args array
 * Return: 1=success  0=failure
 */
int main(int argc __attribute__((unused)), char **argv)
{
	unsigned long i;
	unsigned long k;
	int sum;
	int j;

	sum = j = 0;
	k = argc;
	for (i = 1; i < k ; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
