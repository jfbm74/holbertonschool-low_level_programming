#include <stdio.h>
#include "lists.h"
/**
* print_list - function that prints all the elements of a list_t list
* @h: pointer head list
* Return: Numbers of nodes of the list
*/
size_t print_list(const list_t *h)
{
	size_t sn = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
		printf("[%d] (nil)\n", temp->len);
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		sn++;
	}
	return (sn);
}
