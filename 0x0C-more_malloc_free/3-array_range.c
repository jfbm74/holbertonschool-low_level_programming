#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers.
 * @min: number to start in array
 * @max: number to finish array
 * Return: array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;
	int len;

	if (min > max)
		return (NULL);
	for (i = min; i < max ; i++)
		len++;
	ar = malloc((len * sizeof(int) + 1));
	if (ar == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ar[i] = i;
	}
	return (ar);
}
