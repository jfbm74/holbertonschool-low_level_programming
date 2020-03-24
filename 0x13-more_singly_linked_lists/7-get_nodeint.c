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
	listint_t *node;

	tmp = head;
	for (i = 0; i <= index; i++)
	{
		if (i == index)
		{
			node = malloc(sizeof(listint_t));
			if (!node)
			{
				return (NULL);
			}
			node->n = tmp->n;
			node->next = tmp->next;
			return (node);
		}
		else
		{
			tmp = tmp->next;
		}
	}
	return (NULL);
}
