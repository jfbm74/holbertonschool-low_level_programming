#include "lists.h"
/**
 * delete_nodeint_at_index - t deletes the node at index index of a listint_t
 * linked list.
 * @head: Pointer to first node
 * @index: Position to delete
 * Return:  1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *pivot, *pivot2;
	unsigned int i;

	tmp = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		pivot = tmp;
		tmp = tmp->next;
		*head = tmp;
		free(pivot);
		if (!pivot)
			return (1);
		else
			return (-1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (i == (index - 1))
			{
				pivot = tmp;
				pivot2 = pivot;
				pivot2 = pivot2->next;
				tmp = tmp->next;
				tmp = tmp->next;
				pivot->next = tmp;
				free(pivot2);
				if (!pivot2)
					return (1);
				else
					return (-1);
			}
			else
				tmp = tmp->next;
		}
	}
	return (1);
}
