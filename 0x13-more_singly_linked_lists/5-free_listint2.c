#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Pointer to header node
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *fn;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return;
	while (tmp != NULL)
	{
		fn = tmp;
		tmp = tmp->next;
		free(fn);
		*head = tmp;
	}
}
