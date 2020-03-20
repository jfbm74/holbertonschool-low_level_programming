#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* _strlen - Return the length of a given string
* @s: Pointer to the string
*
* Return: 0
*/
int _strlen(const char *s)
{
	int len;

	len = 0;
	while ((s[len]) != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: Address of head node
 * @str: new node string to copy
 * Return: Address new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *e_node = malloc(sizeof(list_t));

	if (!e_node)
	{
		return (NULL);
	}
	e_node->str = strdup(str);
	e_node->len = _strlen(str);
	e_node->next = NULL;
	if ((*head) == NULL)
	{
		*head = e_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = e_node;
	}
	return (e_node);
}
