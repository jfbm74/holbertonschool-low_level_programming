#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: string that will be copied
 * @n: firts positions to replace
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0;  i < n && dest[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
