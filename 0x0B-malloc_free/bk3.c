#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - turns a pointer to a 2 dim array of integers
 * @width: rows
 * @height: columns
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width ; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
	for (i = 0; i < width; i++)
		free(p[i]);
	free(p);
}
