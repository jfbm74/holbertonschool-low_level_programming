#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_list -  function that frees a list.
 * @head: address of head
 */

void free_list(list_t *head)
{
	list_t *tmp, *tmpend;

	tmp = head;

	while (tmp != NULL)
	{
		tmpend = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = tmpend;
	}
}
