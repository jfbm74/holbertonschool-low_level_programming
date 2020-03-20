#include "holberton.h"
/**
* _strlen - Return the length of a given string
* @s: Pointer to the string
*
* Return: 0
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while ((s[len]) != '\0')
	{
		len++;
	}
	return (len);
}
