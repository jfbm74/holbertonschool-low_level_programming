#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: First node of the list
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pivot;

	pivot = head;
	if (head == NULL)
		return;

	if (pivot->next ==  NULL)
	{
		free(pivot);
		pivot = NULL;
	}
	while (pivot->next !=  NULL)
	{
		head = head->next;
		free(pivot);
		pivot = head;
	}
	free(head);
	head = NULL;
}
