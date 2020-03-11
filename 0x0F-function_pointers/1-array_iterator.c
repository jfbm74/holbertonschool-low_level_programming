#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - Execute a function with array elements.
 * @array: array to iterate.
 * @size: array size.
 * @action: function to execute.
 * Return: Nothing
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if ((array != NULL) && (action != NULL))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
