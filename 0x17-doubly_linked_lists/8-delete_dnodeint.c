#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: First node of the list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pivot = NULL;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	pivot = *head;
	while (pivot->next != NULL)
	{
		if (i == index)
		{
			if (pivot->next != NULL && pivot->prev != NULL)
			{
				current = pivot->prev;
				current->next = pivot->next;
				(pivot->next)->prev = current;
				break;
			}
			else if (pivot->prev == NULL)
			{
				(*head) = (*head)->next;
				(*head)->prev = NULL;
				break;
			}
		}
		pivot = pivot->next;
		i++;
		if (pivot->next == NULL && i == index)
		{
			current = pivot->prev;
			current->next = NULL;
		}
	}
	if (pivot->next == NULL && i != index)
		return (-1);
	free(pivot);
	return (1);
}
