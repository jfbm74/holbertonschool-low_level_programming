#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: Pointer to first node
 * Return:  Returns head node's data
*/
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;
	listint_t *nnode;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	tmp = *head;
	nnode = tmp;
	tmp = tmp->next;
	*head = tmp;
	n = nnode->n;
	free(nnode);
	return (n);
}
