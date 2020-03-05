#include <stdlib.h>
#include <stdio.h>
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

	len = max - min + 1;
	if (min > max)
		return (NULL);
	ar = malloc(len * sizeof(int));
	if (ar == NULL)
		return (NULL);
	/*Asign number to array[i]*/
	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}
	return (ar);
}
