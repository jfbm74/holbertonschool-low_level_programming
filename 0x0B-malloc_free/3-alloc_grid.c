#include <stdlib.h>
/**
 * *alloc_grid - Returns a ptr to a 2 dime array of integers.
 * @width: array cols
 * @height: array rows
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(int *));
	if (ar ==  NULL)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = 0 ; j < i; j++)
			{
				free(ar[i]);
			}
			free(ar);
		}
		for (j = 0; j < width ; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
	free(ar);
}
