#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of slots
 * @size: size of array type
 * Return: string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	str =  malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size) ; i++)
		str[i] = 0;
	return (str);
}
