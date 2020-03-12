#include <stdlib.h>
#include <stdio.h>
/**
 * print_opcodes - prints opcodes of main function
 * @a: Address of main function
 * @n: number
*/

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}
/**
 * main - prints opcodes
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 Success
*/
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
