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
	listint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i <= index)
	{
		if (i == index)
		{
			tmp = head;
			return (tmp);
		}
		else
		{
			head = head->next;
		}
		i++;
	}
	return (NULL);
}
