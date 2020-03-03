#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and initializes with char.
 * @size: size of array
 * @c: char to fill array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = malloc(size * sizeof(char));
		if (a == NULL)
		{
			fprintf(stderr, "Error: Not enough memory left\n");
			exit(EXIT_FAILURE);
		}
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		return (a);
		free(a);
	}
}
