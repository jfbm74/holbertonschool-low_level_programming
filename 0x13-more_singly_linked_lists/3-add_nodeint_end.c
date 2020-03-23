#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node at the end of a list.
 * @head: Pointer to first element of a list
 * @n: value to insert to new node
 * Return: New Node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
