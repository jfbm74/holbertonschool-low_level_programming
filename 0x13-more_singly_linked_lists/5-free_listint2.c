#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Pointer to header node
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	if (head == NULL)
		return;
}
