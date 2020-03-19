#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a  list_t list.
 * @h: Address of header list
 * Return: Number of nodes of the list
*/
size_t list_len(const list_t *h)
{
	size_t sn = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		sn++;
	}
	return (sn);
}
