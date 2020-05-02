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
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || *h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* Insert a last node */
	pivot = *h;
	current = *h;
	while (i <= idx)
	{
		if (pivot == NULL)
			return (NULL);
		pivot = pivot->next;
		current = current->next;
		i++;
	}
	/* If idx greater than number of nodes*/
	if (pivot == NULL)
		return (NULL);
	/* If is the last node */
	if (pivot->next == NULL)
		return (add_dnodeint_end(h, n));
	new->n = n;
	current = current->prev;
	new->next = pivot;
	new->prev = current;
	current->next = new;
	pivot->prev = new;
	return (new);
}
