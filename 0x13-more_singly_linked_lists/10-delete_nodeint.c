#include "lists.h"
/**
 * delete_nodeint_at_index - t deletes the node at index index of a listint_t
 * linked list.
 * @head: Pointer to first node
 * @index: Position to delete
 * Return:  1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i = 0;
	int retval = -1;
	listint_t * current = *head;
	listint_t * temp_node = NULL;
	if (index == 0) {
		return pop(head);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL) 
		{
			return -1;
		}
		current = current->next;
	}
	temp_node = current->next;
	temp_node = current->n;
	current->next = temp_node->next;
	free(temp_node);
	return (1);
}
