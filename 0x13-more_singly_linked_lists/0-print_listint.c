#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: List Head
 * Return: Numbers of nodes
*/

size_t print_listint(const listint_t *h)
{
	int n_nodes;

	n_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
