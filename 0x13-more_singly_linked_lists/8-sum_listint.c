#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to first node
 * Return: Sum of values on the linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
