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
	dlistint_t *pivot;
	dlistint_t *current;
	dlistint_t *new;
	unsigned int i = 0;

	if (h == NULL || (*h == NULL && idx > 0))
		return (NULL);
	pivot = *h;
	current = *h;
	while (pivot->next != NULL)
	{
		if (i == idx)
		{
			if (pivot->next != NULL && pivot->prev != NULL)
				break;
			else if (pivot->prev == NULL)
				return (add_dnodeint(h, n));
		}
		pivot = pivot->next;
		i++;
		if (pivot->next == NULL && i == idx)
			return (add_dnodeint_end(h, n));
	}
	if (pivot->next == NULL && i != idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = pivot->prev;
	current->next = new;
	pivot->prev = pivot;
	new->prev = current;
	new->next = pivot;
	return (new);
}
