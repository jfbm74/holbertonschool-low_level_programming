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
	unsigned int i;
	listint_t *tmp;
	listint_t *pivot;
	listint_t *new;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = tmp;
		new->n = n;
		*head = new;
		return (new);
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (i == (idx - 1))
			{
				pivot = tmp;
				tmp = tmp->next;
				new->next = pivot->next;
				new->n = n;
				pivot->next = new;
				return (new);
			}
			else
			{
				tmp = tmp->next;
			}
		}
	}
	return (NULL);
}
