#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Address of head
 * @str: string
 * Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int n = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	n = _strlen(str);
	(*new_node).len = n;
	(*new_node).str = strdup(str);

	new_node->next = (*head);
	*head = new_node;
	return (*head);
}
