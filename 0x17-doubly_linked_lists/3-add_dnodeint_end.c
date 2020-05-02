#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 * @head: First node of given list
 * @n: value of new node
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *pivot;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	pivot = *head;
	while (pivot->next != NULL)
	{
		pivot = pivot->next;
	}
	new->prev = pivot;
	new->next = NULL;
	pivot->next = new;
	return (new);
}
