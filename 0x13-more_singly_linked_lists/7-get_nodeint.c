#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head: Pointer to First Element Node
 * @index: is the index of the node, starting at 0
 * Return: Node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = NULL;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (i == index)
		{
			tmp->n = head->n;
			tmp->next = head->next;
			return (tmp);
		}
		else
		{
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
