#include "lists.h"
/**
 * sum_dlistint - function that returns sum of all the data of a linked list.
 * @head: Firt node of the list
 * Return: Sum of all data (n) of the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *pivot;

	pivot =  head;
	if (head == 0)
	{
		return (sum);
	}
	while (pivot->next != NULL)
	{
		sum = sum + pivot->n;
		pivot = pivot->next;
	}
	sum = sum + pivot->n;
	return (sum);
}