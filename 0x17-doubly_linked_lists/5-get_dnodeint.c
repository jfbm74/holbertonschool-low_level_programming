#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list.
 * @head: First node of the list
 * @index: the index of the node, starting from 0
 * Return: returns the nth node or NULL if it does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index != 0 && head != NULL)
	{
		head = head->next;
		index = index - 1;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
