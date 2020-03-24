#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to first node
 * @idx: Node position to insert
 * @n: Value of new node inserted
 * Return: New Node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = NULL;
	listint_t *pivot = NULL;
	listint_t *new = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	tmp = (*head);
	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}
	while (tmp)
	{
		if (i == (idx - 1))
		{
			pivot = tmp->next;
			new->next = pivot;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
