#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: List Head
 * Return: Numbers of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t n_nodes = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n_nodes++;
	}
	return (n_nodes);
}
