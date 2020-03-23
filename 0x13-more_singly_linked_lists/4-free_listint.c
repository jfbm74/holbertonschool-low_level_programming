#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: Pointer to header node
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *fn;

	tmp = head;

	while (tmp)
	{
		fn = tmp;
		tmp = tmp->next;
		free(fn);
	}
}
