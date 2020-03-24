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
	while (tmp)
	{
		tmp = tmp->next;
		free(*head);
		(*head) = tmp;
	}
}
