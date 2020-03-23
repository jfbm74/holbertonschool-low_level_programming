#include "lists.h"
/**
 * listint_len - function that returns number of items in a linked list.
 * @h: List Head
 * Return: Numbers of elements
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t n_nodes = 0;

	while (tmp)
	{
		tmp = tmp->next;
		n_nodes++;
	}
	return (n_nodes);
}
