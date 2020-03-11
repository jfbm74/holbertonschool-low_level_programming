#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 * @array: 
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index of the 1rst element for which the cmp function not return 0
 * */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int inx;

	inx = -1;
		
	for (i = 0; i < size; i++)
	{
		inx = cmp(array[i]);
		if (inx == 1)
		{
			return (i);
		}
	}
	return (-1);
}