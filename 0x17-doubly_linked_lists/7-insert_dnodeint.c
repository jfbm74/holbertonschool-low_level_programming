#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given pos
 * @h: First node
 * @idx: the index of the list where the new node should be added.
 * @n: Value of new node
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	unsigned int len_dlist = 0;
	dlistint_t *pivot;
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*h == NULL || idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	new->n = n;
	pivot = *h;
	current = *h;
	while (i < idx)
	{
		if (current == NULL)
			return (*h);
		pivot = pivot->next;
		current = current->next;
		i++;
	}
	pivot = pivot->next;
	if (pivot == NULL)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	else if (pivot != NULL)
	{
		new->next = pivot;
		new->prev = current;
		current->next = new;
		pivot->prev = new;
	}
	return (new);
}