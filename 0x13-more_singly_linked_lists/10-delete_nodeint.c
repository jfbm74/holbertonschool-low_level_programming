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
	unsigned int i = 0;
	listint_t *tmp = NULL;
	listint_t *pivot = NULL;

	tmp = (*head);
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == (index - 1))
		{
			pivot = tmp;
			pivot = pivot->next;
			tmp->next = pivot->next;
			free(pivot);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
