#include <stdlib.h>
/**
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;
	int len;

	if (min > max)
		return (NULL);
	for (i =min; i < max ; i++)
		len++;
	ar = malloc(len * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ar[i] = min;
	}
	return (ar);
}
