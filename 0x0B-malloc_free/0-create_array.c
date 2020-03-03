#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 * @size: 
 * @c:
 * Return: 
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;


	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		fprintf(stderr, "Error: Not enough memory left\n");
		exit (EXIT_FAILURE);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
