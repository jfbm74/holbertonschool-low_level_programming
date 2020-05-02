#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: First node of the list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pivot, *current;
	int i = 1;

	pivot = *head, current = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (pivot->next == NULL)
		{
			*head = pivot->next;
			free(pivot);
			return (1);
		}
		pivot = pivot->next, pivot->prev = NULL;
		free(current), *head = pivot;
		return (1);
	}
	while (i < index)
	{
		if (current == NULL)
			return (-1);
		pivot = pivot->next, current = current->next, i++;
	}
	if (current->next == NULL)
		return (-1);
	pivot = pivot->next;
	if (pivot->next == NULL)
	{
		current->next = NULL;
		free(pivot);
		return (1);
	}
	else
	{
		current->next = pivot->next, current = current->next;
		current->prev = pivot->prev;
		free(pivot);
		return (1);
	}
}