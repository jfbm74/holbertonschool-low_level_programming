
#include "lists.h"
/**
 * dlistint_len - Return number of nodes
 * @h: head of list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	if (h == NULL)
		return (number);
	while (h->next != NULL)
	{
		number++;
		h = h->next;
	}
	number++;
	return (number);
}
