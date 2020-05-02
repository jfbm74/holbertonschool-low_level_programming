#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: First node of the list
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pivot;

	if (head == NULL)
		return;

	while (head->next !=  NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
